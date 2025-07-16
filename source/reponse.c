#include"reponse.h"

//Nouvelle fonction de Antoine 29/05
char *getMethod(Disp *head){
    Liste *tete=NULL;

    searchArbre("method",head,&tete);
    if((strncmp(tete->node->text,"HEAD",tete->node->size)==0)){
        return("HEAD");
    }
    else if((strncmp(tete->node->text,"GET",tete->node->size)==0)){
        return("GET");
    }
    else{
        return("");
    }
}

//Modif de Antoine 29/05
char *serverResponse(Disp *head, int sem){
    char *response;
    char *status=backMessage(sem, head);
    char *httpversion=version(head);
    char *header_date=date(head);
    char *nameserver=server(head);
    char *header_CL=content_length(head);
    char *header_CT=contentType(head);
    char *last_modified_str=last_modifed(head);

    //Server Response
    if (getMethod(head)=="HEAD"){
        if(sem==200){
            strcat(response, status);
            strcat(response, header_date);
            strcat(response, "\r\n");
            strcat(response, nameserver);
            strcat(response, "\r\n");
            strcat(response, header_CL);
            strcat(response, "\r\n");
            strcat(response, header_CT);
            strcat(response "\r\n");
            strcat(response, last_modified_str);
            strcat(response, "\r\n\r\n");
        }
        else{
            strcat(response, status);
            strcat(response, nameserver);
            strcat(response, "\r\n\r\n");
        }
    }
    else if(getMethod(head)=="GET"){
        if(sem==200){
            messageBody=getRessource(head);//A implémenter
            strcat(response, status);
            strcat(response, header_date);
            strcat(response, "\r\n");
            strcat(response, nameserver);
            strcat(response, "\r\n");
            strcat(response, header_CL);
            strcat(response, "\r\n");
            strcat(response, header_CT);
            strcat(response "\r\n");
            strcat(response, last_modified_str);
            strcat(response, "\r\n\r\n");
            strcat(response, messageBody);  
        }
        else{
            strcat(response, status);
            strcat(response, nameserver);
            strcat(response, "\r\n\r\n");
        }
    }
    return(response);
}

char *version(head){
     // Version HTTP
    Liste *tete = NULL;
    searchArbre("HTTP_version",head,&tete);
    char * http_version =malloc(tete->node->size*sizeof(char)+1);
    //printf("taille=%d\n", tete->node->size);
    strncpy(http_version,tete->node->text,tete->node->size);
    //printf("Versionn = %s \n", http_version);
    return(http_version);
}

char *date(head){
    // DATE
    char date[100];
    time_t now = time(NULL);
    strftime(date, sizeof(date), "%Y-%m-%d %H:%M:%S", localtime(&now)); //on formate date en chaine
    return(date);
}

char *server(head){
    //SERVER
    char * nameserver = "BBC";
    printf("Nameserver = %s\n", nameserver);
    return(nameserver);
}

char *contentLength(head){
    //CONTENT_LENGTH
    Liste *teteContentLength = NULL;
    searchArbre("Content_Length",head,&teteContentLength);
    printf("taille=%d\n", teteContentLength->node->size);
    char * content_length = malloc(teteContentLength->node->size*sizeof(char)+1);
    printf("taille = %d \n",teteContentLength->node->size);
    strncpy(content_length,teteContentLength->node->text,teteContentLength->node->size);
    content_length[teteContentLength->node->size] = '\0';
    return(content_length);
}

char *contentType(head){
    //CONTENT_TYPE
    char * path = "/http/librequest-0.5/index.html";  //Attention spécifiez bien votre chemin!
    char * content_type = malloc(20 * sizeof(char));
    char * fin = strrchr(path, '.');
        
    if (strcmp(fin, ".html") == 0) {
        strcpy(content_type,"text/html");
    } else if (strcmp(fin, ".txt") == 0) {
        strcpy(content_type,"text/plain");
    } else if (strcmp(fin, ".jpg") == 0 || strcmp(fin, ".jpeg") == 0) {
        strcpy(content_type,"image/jpeg");
    } else if (strcmp(fin, ".png") == 0) {
        strcpy(content_type,"image/png");
    } else if (strcmp(fin, ".gif") == 0) {
        strcpy(content_type,"image/gif");
    } else if (strcmp(fin, ".pdf") == 0) {
        strcpy(content_type,"application/pdf");
    } else if (strcmp(fin, ".mp3") == 0) {
        strcpy(content_type, "audio/mpeg");
    } else if (strcmp(fin, ".mp4") == 0) {
        strcpy(content_type, "video/mp4");
    } else if (strcmp(fin, ".avi") == 0) {
        strcpy(content_type, "video/x-msvideo");
    } else{
        printf("Content_type not implemented\n");
    }
    return(content_type);
}

char *last_modified(head){
    //LAST MODIFIED
    char * filename = strrchr(path, '/');
    if (filename != NULL) {
        filename++;
    } else {
        filename = path;
    }

    struct stat file_stat; // pour avoir last modified
    stat(filename, &file_stat);
    time_t last_modified = file_stat.st_mtime;
    struct tm *last_modified_tm = gmtime(&last_modified);
    char last_modified_str[50];
    strftime(last_modified_str, sizeof(last_modified_str), "%a, %d %b %Y %H:%M:%S GMT", last_modified_tm);
    return(last_modified_str);
}

//Nouvelle fonction de Antoine 29/05
char* getRessource(Disp *head){
    FILE *fd;
    //Récupérer le chemin vers le fichier;
    fd=fopen(/*PATH*/, 'r');
    char* buffer;
    char* response=malloc(/*jsp quoi*/);
    while((buffer=fgets(fd))!=EOF){
        strcat(response, buffer);
    }
    return(response);
}