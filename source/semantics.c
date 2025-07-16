#include"semantics.h"

/*
Le code implémente l'algorithme pour enlever les segments de point dans un chemin d'URI, tel que spécifié dans la RFC 3986.
La fonction "remove_dot_segments" prend deux paramètres d'entrée, un buffer d'entrée contenant un chemin d'URI avec des segments de point, et un buffer de sortie où le chemin d'URI modifié sera stocké.
*/
void remove_dot_segments(char* input_buffer, char* output_buffer) {
    // Initialisation des buffers
    int input_length = strlen(input_buffer);

    if ((input_length == 1 && input_buffer[0] == '/')||(input_length == 2 && input_buffer[0] == '/' && input_buffer[1] == '.')||(input_length == 3 && input_buffer[0] == '/' && input_buffer[1] == '.' && input_buffer[2] == '.')) {
        output_buffer[0] = '/';
        output_buffer[1] = '\0';
        return;
    }

    char* current_segment = input_buffer;
    // On cherche la première occur de /
    char* next_segment = strchr(current_segment + 1, '/');
    // plus de segment à traiter
    if (next_segment == NULL) {
        next_segment = input_buffer + input_length;
    }
    
    //2. While the input buffer is not empty, loop as follows: (rfc)
    while (current_segment < input_buffer + input_length) {
        int segment_length = next_segment - current_segment;
        
        // 2B supprime /./
        if (segment_length == 2 && current_segment[0] == '.' && current_segment[1] == '/') {

            current_segment += 2;
        }
        //2C: supprime /../
        else if (segment_length == 2 && current_segment[0] == '.' && current_segment[1] == '.') {
            // derniere occur de /
            char* last_segment = strrchr(output_buffer, '/');
            if (last_segment == NULL) {
                last_segment = output_buffer;
            }
            *last_segment = '\0';
            current_segment += 2;
        }
        //2D. supprime .
        else if (segment_length == 1 && current_segment[0] == '.') {
            current_segment += 1;
        }
        //2B supprime /.
        else if (segment_length == 2 && current_segment[0] == '/' && current_segment[1] == '.') {
            current_segment += 2;
        }
        //2C supprime /..
        else if (segment_length == 3 && current_segment[0] == '/' && current_segment[1] == '.' && current_segment[2] == '.') {
            char* last_segment = strrchr(output_buffer, '/');
            if (last_segment == NULL) {
                last_segment = output_buffer;
            }
            *last_segment = '\0';
            current_segment += 3;
        }
        //Ignore /
        else if (segment_length == 1 && current_segment[0] == '/') {
            current_segment += 1;
        }
        //E. ajoute segment qui ne sont pas des . 
        else {
            if (output_buffer[0] != '\0') {
                strcat(output_buffer, "/");
            }
            strncat(output_buffer, current_segment, segment_length);
            current_segment = next_segment;
        }
        
        // Va segment suivant
        if (*current_segment == '/') {
            current_segment += 1;
        }
        next_segment = strchr(current_segment + 1, '/');
        if (next_segment == NULL) {
            next_segment = input_buffer + input_length;
        }
    }
}

//Modif fonction de Antoine 29/05
char *decode(char *url) {
    char *resultat = malloc(strlen(url) + 1);
    char *temp;
    while (*url != '\0') {
        if (*url == '%'){
            url++;
            temp=strtol(url, NULL, 16);
            strcat(resultat, temp);
            url+=2;
        }
        else{
            strcat(resultat, url);
            url++;
        }
    }
    return resultat;
}

int semantic_Content_Length_TE(Disp *head){
    Liste *nodeContent_Length=NULL;
    Liste *nodeTransfert_Encoding=NULL;
    searchArbre("Content_Length_header", head, &nodeContent_Length);
    searchArbre("Transfer_Encoding_Header", head, &nodeTransfert_Encoding);
    if(nodeContent_Length->node!=NULL && nodeTransfert_Encoding->node!=NULL){
        return(400);
    }
    return(200);
}

int semantic_Host(Disp *head){
    Liste *tete=NULL;
    Liste *start=NULL;
    int count = 0;

    searchArbre("Host",head,&tete);

    if(tete == NULL){
        return 400;
    }
    else{
        start = tete;
        while((tete->node) != NULL){
            tete = tete->suivant;
            count++;
        }
        if(count == 1){
            tete = start;
            // A compléter pour la validité de HOST :
            return 200;
        }
    }
    return 400;
}

void getPATH(Disp *head, char **path){
    Liste *listepath=NULL;
    char input_buffer[200];
    char *buffer;
    char *output="";
    int i=0;
    searchArbre("absolute_path", head, &listepath);
    int len= listepath->node->size;
    *path=malloc(sizeof(char)*len);
    **path='\0';
    while (i<len){
        input_buffer[i]=*(listepath->node->text);
        (listepath->node->text)++;
        i++;
    }
    input_buffer[i]='\0';
    printf("%s\n", input_buffer);
    buffer=decode(input_buffer);
    printf("%s\n", buffer);
    remove_dot_segments(buffer, *path);
    printf("%s\n", *path);
}

void getHost(Disp *head, char **host){
    Liste *listeHost=NULL;
    searchArbre("host", head, &listeHost);
    int len=listeHost->node->size;
    *host=malloc(sizeof(char)*len);
    **host='\0';
    *host=strncpy(*host, (listeHost->node->text), (listeHost->node->size));
}

int verifPATH(char *path){
    FILE * fd;
    if((fd = fopen(path, "r"))==NULL){
        return(404);
    }
    else{
        fclose(fd);
        return(200);
    }
}

char *concatenate(char *first, char *second){
    char *result=malloc(sizeof(char)*(strlen(first)+strlen(second)+1));
    result=strcat(first, second);
    result[strlen(first)+strlen(second)+ 1]='\0';
    return(result);
}

int semantic_Method(Disp *head){
    Liste *tete=NULL;

    searchArbre("method",head,&tete);
    
    if( (strncmp(tete->node->text,"HEAD",tete->node->size)==0) || (strncmp(tete->node->text,"GET",tete->node->size)==0) ){
        return 200;
    }
    else{    
        return 501;
    }
}

int semantic_Version(Disp *head){
    Liste *nodeVersion = NULL;
    char buffer[10];
    int i = 0;
    int j = 0;

    searchArbre("HTTP_version",head,&nodeVersion);
    
    if(nodeVersion == NULL){
        return 400;
    }
    else{
        while(*(nodeVersion->node->text) != '/'){
            (nodeVersion->node->text)++;
            i++;
        }
        (nodeVersion->node->text)++;
        i++;
        while(i < (nodeVersion->node->size)){
            buffer[j] = *(nodeVersion->node->text);
            (nodeVersion->node->text)++;
            j++;
            i++;
        }
        buffer[j] = '\0';
        if(strcmp(buffer,"1.0") == 0){
            return 200;
        }
        else if(strcmp(buffer,"2.0") == 0){
            return 200;
        }
        else if(strcmp(buffer,"1.1") == 0){
            return 200;
        }
        else if(strcmp(buffer,"3.0") == 0){
            return 200;
        }
        else if(strcmp(buffer,"0.9") == 0){
            return 200;
        }
    }
    return 400;
}

int semantic(Disp *head, char *path){
    if(semantic_Method(head) == 200){
        if(semantic_Host(head) == 200){
            if(semantic_Content_Length_TE(head) == 200){
                if(semantic_Version(head) == 200){
                    if(verifPATH(path) == 200){
                        return(200);
                    }
                    return(404);
                }
            }
        }
        return(400);
    }
    return(501);
}


//Modif de Antoine 29/05
char *backMessage(int semantic,Disp *head){ //passe de void à char *
    Liste *tete = NULL;
    char *buffer = malloc(sizeof(char)*30);
    char *reponse=malloc(sizeof(char)*30);

    searchArbre("HTTP_version",head,&tete);

    int len= tete->node->size;
    buffer=malloc(sizeof(char)*len);
    *buffer ='\0';
    buffer =strncpy(buffer, (tete->node->text), (tete->node->size));

    switch(semantic){
        case 200:
            reponse=strcat(buffer, " 200 OK \r\n");
            break;
        case 400:
            response=strcat(buffer, " 400 ");
            strcat(response, "BAD REQUEST\r\n");
            break;
        case 404:
            response=strcat(buffer, " 404 ");
            strcat(response, "NOT FOUND\r\n");
            break;
        case 501:
            response=strcat(buffer, " 501 ");
            strcat(response, "NOT IMPLEMENTED\r\n");
            break;  
    }
    return(response);
}
