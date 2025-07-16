#include "parserhttp.h"

/*-------------Convertit le type enum en chaine de char--------------------*/
char *toString(MESSAGE m)
{
    char *pointeur;

    switch (m)
    {
    case HTTP_message:
        pointeur = "[HTTP_message:] = ";
        break;
    case start_line:
        pointeur = "[start_line :] = ";
        break;
    case request_line:
        pointeur = "[request_line :] = ";
        break;
    case method:
        pointeur = "[method :] = ";
        break;
    case token:
        pointeur = "[token :] = ";
        break;
    case __sp:
        pointeur = "[__sp :] = ";
        break;
    case request_target:
        pointeur = "[request_target :] = ";
        break;
    case origin_form:
        pointeur = "[origin_form :] = ";
        break;
    case absolute_path:
        pointeur = "[absolute_path :] = ";
        break;
    case __icar:
        pointeur = "[__icar :] = ";
        break;
    case segment:
        pointeur = "[segment :] = ";
        break;
    case query:
        pointeur = "[query :] = ";
        break;
    case HTTP_name:
        pointeur = "[HTTP_name :] = ";
        break;
    case HTTP_version:
        pointeur = "[HTTP_version :] = ";
        break;
    case __crlf:
        pointeur = "[__crlf :] = ";
        break;
    case header_field:
        pointeur = "[header_field :] = ";
        break;
    case field_name:
        pointeur = "[field_name :] = ";
        break;
    case field_value:
        pointeur = "[field_value :] = ";
        break;
    case OWS:
        pointeur = "[OWS :] = ";
        break;
    case field_vchar:
        pointeur = "[field_vchar :] = ";
        break;
    case field_content:
        pointeur = "[field_content :] = ";
        break;
    case __htab:
        pointeur = "[__htab :] = ";
        break;
    case obs_fold:
        pointeur = "[obs_fold :] = ";
        break;
    case message_body:
        pointeur = "[message_body :] = ";
        break;
    case __octet:
        pointeur = "[__octet :] =  ";
        break;
    case __istring:
        pointeur = "[__istring :] = ";
        break;
    case connection_option:
        pointeur = "[connection_option :] = ";
        break;
    case Connection:
        pointeur = "[Connection :] = ";
        break;
    case cookie_string:
        pointeur = "[cookie_string :] = ";
        break;
    case cookie_pair:
        pointeur = "[cookie_pair :] = ";
        break;
    case cookie_name:
        pointeur = "[cookie_name :] = ";
        break;
    case cookie_value:
        pointeur = "[cookie_value :] = ";
        break;
    case cookie_octet:
        pointeur = "[cookie_octet :] = ";
        break;
    case Content_Length_header:
        pointeur = "[Content_Length_header :] = ";
        break;
    case Content_Type:
        pointeur = "[Content_Type :] = ";
        break;
    case type:
        pointeur = "[type :] = ";
        break;
    case Content_Length:
        pointeur = "[Content_Length :] = ";
        break;
    case media_type:
        pointeur = "[media_type :] = ";
        break;
    case parameter:
        pointeur = "[parameter :] = ";
        break;
    case sub_type:
        pointeur = "[sub_type :] = ";
        break;
    case quoted_string:
        pointeur = "[quoted_string :] = ";
        break;
    case quoted_pair:
        pointeur = "[quoted_pair :] = ";
        break;
    case qd_text:
        pointeur = "[qd_text :] = ";
        break;
    case expect:
        pointeur = "[expect :] = ";
        break;
    case expect_header:
        pointeur = "[expect_header :] = ";
        break;
    case Connection_header:
        pointeur = "[Connection_header :] = ";
        break;
    case cookie_header:
        pointeur = "[cookie_header :] = ";
        break;
    case Content_Type_header:
        pointeur = "[Content_Type_header :] = ";
        break;
    case IPv4address:
        pointeur = "[IPv4address :] = ";
        break;
    case host:
        pointeur = "[host :] = ";
        break;
    case __digit:
        pointeur = "[__digit :] = ";
        break;
    case Host_header:
        pointeur = "[Host_header :] = ";
        break;
    case Transfer_Encoding_Header:
        pointeur = "[Transfer_Encoding_Header :] = ";
        break;
    case Transfer_Encoding:
        pointeur = "[Transfer_Encoding : ] = ";
        break;
    case transfer_encoding:
        pointeur = "[transfer_encoding : ] = ";
        break;
    case transfer_coding:
        pointeur = "[transfer_coding : ] = ";
        break;
    case  transfer_extension:
        pointeur = "[transfer_extension : ] = ";
        break;
    case transfer_parameter:
        pointeur = "[transfer_parameter : ] = ";
        break;
    case BWS:
        pointeur = "[BWS : ] = ";
        break;
    case reg_name:
        pointeur ="[reg_name : ] = ";
        break;
    case dec_octet:
        pointeur ="[dec_octet : ] = ";
        break;
    case IP_literal:
        pointeur ="[IP_literal : ] = ";
        break;
    case IPvFuture:
        pointeur ="[IPvFuture : ] = ";
        break;
    case __hexdig:
        pointeur ="[__hexdig : ] = ";
        break;
    case IPv6address:
        pointeur ="[IPv6address : ] = ";
        break;
    case h16:
        pointeur ="[h16 : ] = ";
        break;
    case ls32:
        pointeur ="[ls32 : ] = ";
        break;
    case uri_host:
        pointeur = "[uri_host : ] = ";
        break;
    case Host:
        pointeur = "[Host : ] = ";
        break;
    case port:
        pointeur = "[port : ] = ";
        break;
    case referer_header:
        pointeur = "[referer_header : ] = ";
        break;
    case absolute_URI:
        pointeur = "[absolute_URI : ] = ";
        break;
    case partial_URI:
        pointeur = "[partial_URI : ] = ";
        break;
    case hier_part:
        pointeur = "[hier_part : ] = ";
        break;
    case authority:
        pointeur = "[authoriy : ] = ";
        break;
    case userinfo:
        pointeur = "[userinfo : ] = ";
        break;
    case path_abempty:
        pointeur = "[path_abempty : ] = ";
        break;
    case path_absolute:
        pointeur = "[path_absolute : ] = ";
        break;
    case path_rootless:
        pointeur = "[path_rootless : ] = ";
        break;
    case path_noscheme:
        pointeur = "[path_noscheme : ] = ";
        break;
    case segment_nz:
        pointeur = "[segment_nz : ] = ";
        break;
    case segment_nz_nc:
        pointeur = "[segment_nz_nc : ] = ";
        break;
    case path_empty:
        pointeur = "[path_empty : ] = ";
        break;
    case scheme:
        pointeur = "[scheme : ] = ";
        break;
    }
    return pointeur;
}

char *toString2(MESSAGE m)
{
    char *pointeur;

    switch (m)
    {
    case HTTP_message:
        pointeur = "HTTP_message";
        break;
    case start_line:
        pointeur = "start_line";
        break;
    case request_line:
        pointeur = "request_line";
        break;
    case method:
        pointeur = "method";
        break;
    case token:
        pointeur = "token";
        break;
    case __sp:
        pointeur = "__sp";
        break;
    case request_target:
        pointeur = "request_target";
        break;
    case origin_form:
        pointeur = "origin_form";
        break;
    case absolute_path:
        pointeur = "absolute_path";
        break;
    case __icar:
        pointeur = "__icar";
        break;
    case segment:
        pointeur = "segment";
        break;
    case query:
        pointeur = "query";
        break;
    case HTTP_name:
        pointeur = "HTTP_name";
        break;
    case HTTP_version:
        pointeur = "HTTP_version";
        break;
    case __crlf:
        pointeur = "__crlf";
        break;
    case header_field:
        pointeur = "header_field";
        break;
    case field_name:
        pointeur = "field_name";
        break;
    case field_value:
        pointeur = "field_value";
        break;
    case OWS:
        pointeur = "OWS";
        break;
    case field_vchar:
        pointeur = "field_vchar";
        break;
    case field_content:
        pointeur = "field_content";
        break;
    case __htab:
        pointeur = "__htab";
        break;
    case obs_fold:
        pointeur = "obs_fold";
        break;
    case message_body:
        pointeur = "message_body";
        break;
    case __octet:
        pointeur = "__octet";
        break;
    case __istring:
        pointeur = "__istring";
        break;
    case connection_option:
        pointeur = "connection_option";
        break;
    case Connection:
        pointeur = "Connection";
        break;
    case cookie_string:
        pointeur = "cookie_string";
        break;
    case cookie_pair:
        pointeur = "cookie_pair";
        break;
    case cookie_name:
        pointeur = "cookie_name";
        break;
    case cookie_value:
        pointeur = "cookie_value";
        break;
    case cookie_octet:
        pointeur = "cookie_octet";
        break;
    case Content_Length_header:
        pointeur = "Content_Length_header";
        break;
    case Content_Type:
        pointeur = "Content_Type";
        break;
    case type:
        pointeur = "type";
        break;
    case Content_Length:
        pointeur = "Content_Length";
        break;
    case media_type:
        pointeur = "media_type";
        break;
    case parameter:
        pointeur = "parameter";
        break;
    case sub_type:
        pointeur = "sub_type";
        break;
    case quoted_string:
        pointeur = "quoted_string";
        break;
    case quoted_pair:
        pointeur = "quoted_pair";
        break;
    case qd_text:
        pointeur = "qd_text";
        break;
    case expect:
        pointeur = "expect";
        break;
    case expect_header:
        pointeur = "expect_header";
        break;
    case Connection_header:
        pointeur = "Connection_header";
        break;
    case cookie_header:
        pointeur = "cookie_header";
        break;
    case Content_Type_header:
        pointeur = "Content_Type_header";
        break;
    case IPv4address:
        pointeur = "IPv4address";
        break;
    case host:
        pointeur = "host";
        break;
    case __digit:
        pointeur = "__digit";
        break;
    case Host_header:
        pointeur = "Host_header";
        break;
    case Transfer_Encoding_Header:
        pointeur = "Transfer_Encoding_Header";
        break;
    case Transfer_Encoding:
        pointeur = "Transfer_Encoding";
        break;
    case transfer_encoding:
        pointeur = "transfer_encoding";
        break;
    case transfer_coding:
        pointeur = "transfer_coding";
        break;
    case transfer_extension:
        pointeur = "transfer_extension";
        break;
    case transfer_parameter:
        pointeur = "transfer_parameter";
        break;
    case BWS:
        pointeur = "BWS";
        break;
    case reg_name:
        pointeur = "reg_name";
        break;
    case dec_octet:
        pointeur = "dec_octet";
        break;
    case IP_literal:
        pointeur ="IP_literal";
        break;
    case IPvFuture:
        pointeur ="IPvFuture";
        break;
    case __hexdig:
        pointeur ="__hexdig";
        break;
    case IPv6address:
        pointeur ="IPv6address";
        break;
    case h16:
        pointeur ="h16";
        break;
    case ls32:
        pointeur ="ls32";
        break;
    case uri_host:
        pointeur = "uri_host";
        break;
    case Host:
        pointeur = "Host";
        break;
    case port:
        pointeur = "port";
        break;
    case referer_header:
        pointeur = "referer_header";
        break;
    case absolute_URI:
        pointeur = "absolute_URI";
        break;
    case partial_URI:
        pointeur = "partial_URI";
        break;
    case hier_part:
        pointeur = "hier_part";
        break;
    case authority:
        pointeur = "authority";
        break;
    case userinfo:
        pointeur = "userinfo";
        break;
    case path_abempty:
        pointeur = "path_abempty";
        break;
    case path_absolute:
        pointeur = "path_absolute";
        break;
    case path_rootless:
        pointeur = "path_rootless";
        break;
    case path_noscheme:
        pointeur = "path_noscheme";
        break;
    case segment_nz:
        pointeur = "segment_nz";
        break;
    case segment_nz_nc:
        pointeur = "segment_nz_nc";
        break;
    case path_empty:
        pointeur = "path_empty";
        break;
    case scheme:
        pointeur = "scheme";
        break;
    }
    return pointeur;
}

/*------------Récupération de ligne de la requete-----------------------*/
char *get_ligne(FILE *ptr_file)
{
    char *buffer = (char *)malloc(MAX_LENGTH);
    char *buffertmp = (char*)malloc(MAX_LENGTH);
    while (!feof(ptr_file))
    {
        fgets(buffer, MAX_LENGTH, ptr_file);
        strcat(buffertmp,buffer);
        if (ferror(ptr_file))
        {
            fprintf(stderr, "Code error %d\n", errno);
            break;
        }
    }
    return buffertmp;
}

/*-----------------Déplacement du BUFFER de number----------------------*/

char *avancerpointeur(char **ptr, int number)
{
    char *ptr_bis;
    int i = 0;

    ptr_bis = *ptr;
    while (i != number)
    {
        ptr_bis++;
        i++;
    }
    return ptr_bis;
}


void searchArbre(char *buffer,Disp *head,Liste **tete){

    if(head == NULL){
        return;
    }

    if((*tete) == NULL){
        (*tete) = malloc(sizeof(Liste));
        (*tete)->node = NULL;
        (*tete)->suivant = NULL;
    }
    
    if(strcmp(toString2(head->label),buffer) == 0){
        Liste *new = malloc(sizeof(Liste));
        new->node = head;
        new->suivant = *tete;
        *tete = new;

    }
    searchArbre(buffer,head->son,tete);
    searchArbre(buffer,head->brother,tete);
    
}

void afficherListe(Liste *tete){
    int i = 0;

    if( NULL == tete )
            printf("Liste vide!") ;
    else{
        while(tete->suivant != NULL){
            printf("FOUND : [");
            while (i < tete->node->size){
                printf("%c", *(tete->node->text));
                i++;
                (tete->node->text)++;
            }
        printf("]\n");
        i = 0;
        tete = tete->suivant;
        }
    }
    free(tete);
}

/*--------------------CREER UN NOEUD DE L'ARBRE--------------------------*/
Disp *createNode(Disp *brother, Disp *son, char *text, int size, MESSAGE label)
{
    Disp *newNode = malloc(sizeof(Disp));
    newNode->brother = brother;
    newNode->son = son;
    newNode->text = text;
    newNode->size = size;
    newNode->label = label;
    return (newNode);
}

/*-------------------SUPPRESSION D'UN ARBRE------------------------------*/
void free_arbre(Disp *arbre)
{
    if (arbre == NULL)
    {
        return;
    }
    free_arbre(arbre->son);
    free_arbre(arbre->brother);
    free(arbre);
}

/*-------------------AFFICHER UN ARBRE---------------------------*/
void afficherArbre(Disp *tree,int nb){
    int i = 0;
    int j;
    char *buffertmp;

    if (tree == NULL){
    }
    else{
        buffertmp = tree->text;
        for(j=0;j<nb;j++){
            printf("    ");
        }
        printf("%s  ", toString(tree->label));
        printf("\"");
        while (i < tree->size){
            printf("%c", *(buffertmp));
            i++;
            (buffertmp)++;
        }
        printf("\"");
        printf("\n");
        afficherArbre(tree->son,nb + 1);
        afficherArbre(tree->brother,nb);
    }
}

bool isOctet(char *buffer, Disp **node)
{
    *node = createNode(NULL, NULL, buffer, 1, __octet);
    return (true);
}

/*------------VERIF BODY MESSAGE--------------------*/
bool isMessageBody(char *buffer, Disp **node)
{
    char *bufferTmp = buffer;
    int count = 0;
    Disp *nodeTmp;
    Disp *nodeOctet;
    if(strlen(buffer)==0){
        return(false);
    }
    while ((*buffer!='\0') && isOctet(buffer, &nodeOctet))
    {
        if (count == 0)
        {
            *node = createNode(NULL, nodeOctet, buffer, 1, message_body); 
        }
        else
        {
            nodeTmp->brother = nodeOctet;
        }
        nodeTmp = nodeOctet;
        buffer++;
        count++;
    }
    (*node)->size = buffer - bufferTmp; //modifié
    return (true);
}

/*------------VERIF START LINE--------------------*/
bool isStartLine(char *buffer, Disp **node)
{
    Disp *nodeRequestLine;
    if (isRequestLine(buffer, &nodeRequestLine))
    {
        *node = createNode(NULL, nodeRequestLine, buffer, nodeRequestLine->size, start_line);
        return (true);
    }
    return (false);
}

/*-----------VERIF REQUETE HTTP---------------*/
bool isRequestLine(char *buffer, Disp **node)
{
    char *bufferTmp;
    bufferTmp = buffer;
    Disp *nodeMethod;
    Disp *nodeSpace;
    Disp *nodeHTTP;
    Disp *nodeRequestTarget;
    Disp *nodeCRLF;

    if (isMethod(buffer, &nodeMethod))
    {
        buffer = avancerpointeur(&buffer, nodeMethod->size);
        *node = createNode(NULL, nodeMethod, nodeMethod->text, buffer - bufferTmp, request_line);
        if (isSpace(buffer, &nodeSpace))
        {
            nodeMethod->brother = nodeSpace;
            buffer = avancerpointeur(&buffer, nodeSpace->size);
            if (isRequestTarget(buffer, &nodeRequestTarget))
            {
                nodeSpace->brother = nodeRequestTarget;
                buffer = avancerpointeur(&buffer, nodeRequestTarget->size);
                if (isSpace(buffer, &nodeSpace))
                {
                    nodeRequestTarget->brother = nodeSpace;
                    buffer = avancerpointeur(&buffer, nodeSpace->size);
                    if (isHTTPversion(buffer, &nodeHTTP))
                    {
                        nodeSpace->brother = nodeHTTP;
                        buffer = avancerpointeur(&buffer, nodeHTTP->size);
                        if (isCRLF(buffer, &nodeCRLF))
                        {
                            nodeHTTP->brother = nodeCRLF;
                            buffer = avancerpointeur(&buffer, nodeCRLF->size);
                            (*node)->size = buffer - bufferTmp;
                            return (true);
                        }
                    }
                }
            }
        }
    }
    free_arbre(*node);
    return (false);
}

/*-----------------VERIF METHODE HTTP--------------------*/
bool isMethod(char *buffer, Disp **node)
{
    Disp *nodeToken; // on crée un noeud qui correspond au fils de method
    if (isToken(buffer, &nodeToken))
    { // On verifie que methode est bien un token, et on récupère la valeur du noeud token
        *node = createNode(NULL, nodeToken, nodeToken->text, nodeToken->size, method);
        return (true);
    }
    else
    {
        return (false);
    }
}

/*----------------VERIF TOKEN-------------------------*/
bool isToken(char *buffer, Disp **node)
{              // prend en parametre un noeud de l'arbre et une chaine de char (la requete)
    char *tmp; // on cree une chaine de char temporaire pour faire parcourir la chaine de char)
    tmp = buffer;
    int count = 0; // init compteur
    while ((*buffer == 33) || (*buffer == 35) || (*buffer == 36) || (*buffer == 45) || (*buffer == 37) || (*buffer == 38) || (*buffer == 39) || (*buffer == 42) || (*buffer == 43) || (*buffer == 46) || (*buffer == 94) || (*buffer == 95) || (*buffer == 96) || (*buffer == 124) || (*buffer == 126) || ((*buffer >= 48) && (*buffer <= 57)) || ((*buffer >= 65) && (*buffer <= 90)) || ((*buffer >= 97) && (*buffer <= 122)))
    {
        count++;
        buffer++;
    }
    if (count == 0)
    { // nombre de char insuffisant
        return (false);
    }
    *node = createNode(NULL, NULL, tmp, count, token); // si token on crée un noeud de l'arbre
    return (true);
}

/*-----------------VERIF ESPACE-----------------------*/
bool isSpace(char *buffer, Disp **node)
{
    if (*buffer == 32)
    {
        *node = createNode(NULL, NULL, buffer, 1, __sp);
        return (true);
    }
    return (false);
}

/*-----------------VERIF REQUEST TARGET----------------*/
bool isRequestTarget(char *buffer, Disp **node)
{
    Disp *nodeOrigin;
    if (isOriginForm(buffer, &nodeOrigin))
    {
        *node = createNode(NULL, nodeOrigin, nodeOrigin->text, nodeOrigin->size, request_target);
        return (true);
    }
    return (false);
}

/*-------------VERIF ORIGIN FORM----------------------*/
bool isOriginForm(char *buffer, Disp **node)
{
    Disp *nodeAbsolute;
    Disp *nodeQuery;
    char *bufferTmp;
    bufferTmp = buffer;
    if (isAbsolutePath(buffer, &nodeAbsolute))
    {
        buffer = avancerpointeur(&buffer, nodeAbsolute->size);
        *node = createNode(NULL, nodeAbsolute, bufferTmp, buffer - bufferTmp, origin_form);
        if (isQuery(buffer, &nodeQuery))
        {
            nodeAbsolute->brother = nodeQuery;
            buffer = avancerpointeur(&buffer, (nodeQuery->brother->size));
            (*node)->size = buffer - bufferTmp;
        }
        return (true);
    }
    return (false);
}

/*----------------VERIF QUERY POTENTIEL---------------------*/
bool isQuery(char *buffer, Disp **node)
{
    char *bufferTmp;
    bufferTmp = buffer;
    int result;
    if (*buffer == 63)
    {
        *node = createNode(NULL, NULL, bufferTmp, 1, __icar);
        buffer++;
        while ((result = isPchar(buffer)) != 5 || (*buffer == '/') || (*buffer == '?'))
        {
            if(*buffer == '/' || *buffer == '?')
                buffer++;
            else
                buffer += result;
        }
        (*node)->brother = createNode(NULL, NULL, bufferTmp, buffer - bufferTmp, query);
        return (true);
    }
    return (false);
}

/*-----------------VERIF ABSOLUTE PATH-----------------*/
bool isAbsolutePath(char *buffer, Disp **node)
{
    char *bufferTmp;
    Disp *nodeSegment;
    int i = 0;
    Disp *nodeTmp;
    bufferTmp = buffer;
    while (*buffer == 47)
    {
        nodeTmp = createNode(NULL, NULL, buffer, 1, __icar);
        if (i == 0)
        {
            *node = createNode(NULL, nodeTmp, buffer, buffer - bufferTmp, absolute_path);
        }
        else
        {
            nodeSegment->brother = nodeTmp;
        }
        buffer++;
        if (isSegment(buffer, &nodeSegment))
        {
            nodeTmp->brother = nodeSegment;
            buffer += nodeSegment->size;
            i++;
        }
    }
    if (i == 0)
    {
        return (false);
    }
    (*node)->size = buffer - bufferTmp;
    return (true);
}

/*---------------VERIFICATION DE SEGMENT PATH-----------------*/
bool isSegment(char *buffer, Disp **node)
{
    int count = 0;
    int result;
    char *bufferTmp;
    bufferTmp = buffer;
    while ((result = isPchar(buffer)) != 5)
    {
        buffer += result;
        count++;
    }
    *node = createNode(NULL, NULL, bufferTmp, buffer - bufferTmp, segment);
    return (true);
}

/*--------------P CHAR-----------------------*/
int isPchar(char *buffer)
{
    if (isUnreserved(buffer) || isSubDelims(buffer) || (*buffer == 64) || (*buffer == 58))
    {
        return (1);
    }
    else if (isPctEncoded(buffer))
    {
        return (3);
    }
    return (5);
}

bool isUnreserved(char *buffer)
{
    if (((*buffer >= 48) && (*buffer <= 57)) || ((*buffer >= 65) && (*buffer <= 90)) || ((*buffer >= 97) && (*buffer <= 122)) || (*buffer == 126) || (*buffer == 46) || (*buffer == 95) || (*buffer == 45))
    {
        return (true);
    }
    return (false);
}
bool isPctEncoded(char *buffer)
{
    Disp *zzz;
    if (*buffer == 37)
    {
        buffer++;
        if (isHexdigit(buffer, &zzz))
        {
            buffer++;
            if (isHexdigit(buffer, &zzz))
            {
                return (true);
            }
        }
    }
    return (false);
}

bool isHexdigit(char *buffer, Disp **node)
{
    if (((*buffer >= 48) && (*buffer <= 57)) || ((*buffer >= 65) && (*buffer <= 70)))
    {
        *node=createNode(NULL, NULL, buffer, 1, __hexdig);
        return (true);
    }
    return (false);
}

bool isSubDelims(char *buffer)
{
    if ((*buffer == 33) || (*buffer == 36) || ((*buffer >= 38) && (*buffer <= 44))|| (*buffer == 59) || (*buffer == 61))
    {
        return (true);
    }
    return (false);
}

/*-------------------------VERIF CHIFFRE----------------------*/
bool isDigit(char *buffer)
{
    if ((*buffer >= 48) && (*buffer <= 57))
    {
        return (true);
    }
    return (false);
}
/*-------------------VERIF HTTP VERSION------------------------*/
bool isHTTPversion(char *buffer, Disp **node)
{
    char *bufferTmp;
    bufferTmp = buffer;
    Disp *nodeName;
    if (isHTTPname(buffer, &nodeName))
    {
        buffer = avancerpointeur(&buffer, nodeName->size);
        if (*buffer == 47)
        {
            buffer++;
            if (isDigit(buffer))
            {
                buffer++;
                if (*buffer == 46)
                {
                    buffer++;
                    if (isDigit(buffer))
                    {
                        buffer++;
                        *node = createNode(NULL, nodeName, bufferTmp, buffer - bufferTmp, HTTP_version);
                        return (true);
                    }
                }
            }
        }
    }
    return (false);
}

/*-------------------VERIF HTTP NAME------------------------*/
bool isHTTPname(char *buffer, Disp **node)
{
    char *bufferTmp;
    bufferTmp = buffer;
    if (*buffer == 72)
    {
        buffer++;
        if (*buffer == 84)
        {
            buffer++;
            if (*buffer == 84)
            {
                buffer++;
                if (*buffer == 80)
                {
                    buffer++;
                    *node = createNode(NULL, NULL, bufferTmp, 4, HTTP_name);
                    return (true);
                }
            }
        }
    }
    return (false);
}

/*--------------------------Verif CRLF--------------------*/
bool isCRLF(char *buffer, Disp **node)
{
    char *bufferTmp;
    bufferTmp = buffer;

    if (*buffer == 13)
    {
        buffer++;
        if (*buffer == 10)
        {
            buffer++;
            *node = createNode(NULL, NULL, bufferTmp, buffer - bufferTmp, __crlf);
            return (true);
        }
    }
    if(*buffer == 10){
        buffer++;
        *node=createNode(NULL,NULL, bufferTmp, buffer-bufferTmp, __crlf);
        return(true);
    }
    return (false);
}

/*-------------FIELD VALUE---------------*/
bool isFieldValue(char *buffer, Disp **node)
{
    Disp *nodeSon;
    Disp *nodeTmp;
    char *bufferTmp = buffer;
    int count = 0;
    while (isObsFold(buffer, &nodeTmp) || isFieldContent(buffer, &nodeTmp))
    {
        if (count == 0)
        {
            *node = createNode(NULL, nodeTmp, buffer, nodeTmp->size, field_value); // modif taille à la fin
        }
        else
        {
            nodeSon->brother = nodeTmp;
        }
        buffer = avancerpointeur(&buffer, nodeTmp->size);
        nodeSon = nodeTmp;
        count++;
    }
    if (count == 0)
    {
        *node = createNode(NULL, NULL, bufferTmp, 0, field_value);
    }
    else
    {
        (*node)->size = buffer - bufferTmp;
    }
    return (true);
}

bool isFieldContent(char *buffer, Disp **node)
{
    char *bufferTmp = buffer;
    Disp *nodeField;
    Disp *nodeSpace;
    Disp *nodeTmp;
    int count = 0;
    if (isFieldVchar(buffer, &nodeField))
    {
        *node = createNode(NULL, nodeField, bufferTmp, nodeField->size, field_content);
        buffer = avancerpointeur(&buffer, nodeField->size);
        while (isSpace(buffer, &nodeSpace) || isHtab(buffer, &nodeSpace))
        {
            if (count == 0)
            {
                nodeField->brother = nodeSpace;
            }
            else
            {
                nodeTmp->brother = nodeSpace;
            }
            nodeTmp = nodeSpace;
            count++;
            buffer++;
        }
        if ((count > 0) && isFieldVchar(buffer, &nodeTmp))
        {
            nodeSpace->brother = nodeTmp;
            buffer = avancerpointeur(&buffer, nodeTmp->size);
        }
        (*node)->size = buffer - bufferTmp;
        return (true);
    }
    return (false);
}

bool isHtab(char *buffer, Disp **node)
{
    if (*buffer == 9)
    {
        *node = createNode(NULL, NULL, buffer, 1, __htab);
        return (true);
    }
    return (false);
}

bool isObsFold(char *buffer, Disp **node)
{
    Disp *nodeCRLF;
    Disp *nodeSpace;
    Disp *nodeTmp;
    char *bufferTmp = buffer;
    int count = 0;
    if (isCRLF(buffer, &nodeCRLF))
    {
        *node = createNode(NULL, nodeCRLF, bufferTmp, nodeCRLF->size, obs_fold);
        while (isSpace(buffer, &nodeSpace) || isHtab(buffer, &nodeSpace))
        {
            if (count == 0)
            {
                nodeCRLF->brother = nodeSpace;
            }
            else
            {
                nodeTmp->brother = nodeSpace;
            }
            nodeTmp = nodeSpace;
            buffer++;
            count++;
        }
        if (count == 0)
        {
            free_arbre(*node);
            return (false);
        }
        (*node)->size = buffer - bufferTmp;
        return (true);
    }
    return (false);
}

bool isFieldVchar(char *buffer, Disp **node)
{
    if (isVchar(buffer) || isObsText(buffer))
    {
        *node = createNode(NULL, NULL, buffer, 1, field_vchar);
        return (true);
    }
    return (false);
}

bool isVchar(char *buffer)
{
    if ((*buffer >= 33) && (*buffer <= 126))
    {
        return (true);
    }
    return (false);
}

bool isObsText(char *buffer)
{
    if (((*buffer & 0xFF) >= 128) && ((*buffer & 0xFF) <= 255))
    {
        return (true);
    }
    return (false);
}

/*-------------FIELD NAME---------------*/
bool isFieldName(char *buffer, Disp **node)
{
    Disp *nodeToken;
    char *bufferTmp;
    bufferTmp = buffer;
    if (isToken(buffer, &nodeToken))
    {
        *node = createNode(NULL, nodeToken, bufferTmp, nodeToken->size, field_name);
        return (true);
    }
    return (false);
}

/*------------------OWS----------------------*/
bool isOWS(char *buffer, Disp **node)
{
    int count = 0;
    char *bufferTmp;
    bufferTmp = buffer;

    while ((*buffer == ' ') || (*buffer == '\t'))
    {
        buffer++;
        count++;
    }
    if (count == 0)
    {
        *node = createNode(NULL, NULL, bufferTmp, 0, OWS);
        return true;
    }
    *node = createNode(NULL, NULL, bufferTmp, count, OWS);
    return (true);
}

/*-----------------------CONTENT LENGTH-------------------------------*/

bool isContentLength(char *buffer, Disp **node)
{
    int count = 0;
    char *buffertmp = buffer;
    while (isDigit(buffer))
    {
        count++;
        buffer++;
    }
    if (count == 0)
    {
        return false;
    }
    *node = createNode(NULL, NULL, buffertmp, buffer - buffertmp, Content_Length);
    return true;
}

/*-------------------CONTENT LENGTH HEADER----------------------------*/
bool isContentLengthHeader(char *buffer, Disp **node)
{
    char *buffertmp = buffer;
    Disp *nodeContentLengthHead;
    Disp *nodeOWS1;
    Disp *nodeOWS2;
    Disp *nodeChar;
    Disp *nodeContentLength;

    char *contentLengthStr = "Content-Length";
    int len = strlen(contentLengthStr);
    if (strncmp(buffer, contentLengthStr, len) == 0)
    {
        nodeContentLengthHead = createNode(NULL, NULL, contentLengthStr, len, __istring);
        buffer = avancerpointeur(&buffer, len);
        *node = createNode(NULL, nodeContentLengthHead, buffertmp, buffer - buffertmp, Content_Length_header);

        if (*(buffer) == ':')
        {
            nodeChar = createNode(NULL, NULL, buffer, 1, __icar);
            nodeContentLengthHead->brother = nodeChar;
            buffer = avancerpointeur(&buffer, 1);
            if (isOWS(buffer, &nodeOWS1))
            {
                nodeChar->brother = nodeOWS1;
                buffer = avancerpointeur(&buffer, nodeOWS1->size);
                if (isContentLength(buffer, &nodeContentLength))
                {
                    nodeOWS1->brother = nodeContentLength;
                    buffer = avancerpointeur(&buffer, nodeContentLength->size);
                    if (isOWS(buffer, &nodeOWS2))
                    {
                        nodeContentLength->brother = nodeOWS2;
                        buffer = avancerpointeur(&buffer, nodeOWS2->size);
                        (*node)->size = buffer - buffertmp;
                        return true;
                    }
                }
            }
        }
        free_arbre(*node);
    }
    return false;
}

/*--------------------CONTENT TYPE-----------------------*/

bool isContentType(char *buffer, Disp **node)
{
    Disp *nodeMediaType;
    char *buffertmp = buffer;

    if (isMediaType(buffer, &nodeMediaType))
    {
        *node = createNode(NULL, nodeMediaType, buffertmp, nodeMediaType->size, Content_Type);
        return true;
    }
    return false;
}

/*-----------------TYPE-------------------------*/
bool isSubType(char *buffer, Disp **node)
{
    Disp *nodeToken;
    char *buffertmp = buffer;
    if (isToken(buffer, &nodeToken))
    {
        *node = createNode(NULL, nodeToken, buffertmp, nodeToken->size, sub_type);
        return true;
    }
    return false;
}

bool isType(char *buffer, Disp **node)
{
    Disp *nodeToken;
    char *buffertmp = buffer;
    if (isToken(buffer, &nodeToken))
    {
        *node = createNode(NULL, nodeToken, buffertmp, nodeToken->size, type);
        return true;
    }
    return false;
}

/*---------------QUOTED STRING------------------*/
bool isQdtext(char *buffer, Disp **node)
{
    Disp *nodepoubelle;
    if (isHtab(buffer, &nodepoubelle) || (isSpace(buffer, &nodepoubelle)) || isObsText(buffer) || (*buffer == '!') || ((*buffer >= 35) && (*buffer <= 91)) || ((*buffer >= 93) && (*buffer <= 126)))
    {
        *node = createNode(NULL, NULL, buffer, 1, qd_text);
        return true;
    }
    return false;
}

bool isQuotedPair(char *buffer, Disp **node)
{
    Disp *nodepoubelle;
    Disp *nodeChar;
    Disp *nodefrr;
    char *bufferTmp = buffer;
    if (*buffer == '\\')
    {
        nodeChar = createNode(NULL, NULL, buffer, 1, __icar);
        *node = createNode(NULL, nodeChar, buffer, 1, quoted_pair);
        buffer++;
        if (isVchar(buffer) || isObsText(buffer) || isHtab(buffer, &nodepoubelle) || (isSpace(buffer, &nodepoubelle)))
        {
            nodefrr = createNode(NULL, NULL, buffer, 1, __icar);
            nodeChar->brother = nodefrr;
            buffer = avancerpointeur(&buffer,nodefrr->size); // changé
            (*node)->size = buffer - bufferTmp; // changé
            return true;
        }
        free_arbre(*node);
    }
    return false;
}

/*-------------QUOTED LINE-------------------------*/
bool isQuotedString(char *buffer, Disp **node)
{
    char *buffertmp = buffer;
    Disp *nodeTmp;
    Disp *nodeValue;
    Disp *nodeChar1;
    Disp *nodeChar2;
    int count = 0;
    if (*buffer == '"')
    { // DQUOTE

        nodeChar1 = createNode(NULL, NULL, buffer, 1, __icar);
        *node = createNode(NULL, nodeChar1, buffer, 1, quoted_string); // actualiser la taille a la fin de la fonction
        buffer = avancerpointeur(&buffer, 1);
        while ((isQdtext(buffer, &nodeValue)) || (isQuotedPair(buffer, &nodeValue)))
        {
            if (count == 0)
            {
                nodeChar1->brother = nodeValue;
            }
            else
            {
                nodeTmp->brother = nodeValue;
            }
            nodeTmp = nodeValue;
            count++;
            buffer = avancerpointeur(&buffer, nodeTmp->size); // changé
        }
        if (*buffer == '"')
        {
            nodeChar2 = createNode(NULL, NULL, buffer, 1, __icar);
            if (count == 0)
            {
                nodeChar1->brother = nodeChar2;
            }
            else
            {
                nodeTmp->brother = nodeChar2;
            }
            buffer = avancerpointeur(&buffer, 1);
            (*node)->size = buffer - buffertmp;
            return true;
        }
    }
    free_arbre(*node);
    return false;
}

/*----------------PARAMETRE----------------------------*/
bool isParameter(char *buffer, Disp **node)
{
    Disp *nodeName;
    Disp *nodeValue;
    Disp *nodeChar;
    char *buffertmp = buffer;

    if (isToken(buffer, &nodeName))
    {
        *node = createNode(NULL, nodeName, buffertmp, nodeName->size, parameter);
        buffer = avancerpointeur(&buffer, nodeName->size);
        if (*buffer == '=')
        {
            nodeChar = createNode(NULL, NULL, buffer, 1, __icar);
            buffer++;
            nodeName->brother = nodeChar;
            if (isToken(buffer, &nodeValue) || isQuotedString(buffer, &nodeValue))
            {
                buffer = avancerpointeur(&buffer, nodeValue->size);
                nodeChar->brother = nodeValue;
                (*node)->size = buffer - buffertmp;
                return true;
            }
        }
        free_arbre(*node);
    }
    return false;
}

/*---------------------PARAMETRE------------------------*/
bool isMediaType(char *buffer, Disp **node)
{
    Disp *nodeType;
    Disp *nodeSubtype;
    Disp *nodeParameter;
    Disp *nodeChar;
    Disp *nodeChar2;
    Disp *nodeOWS1;
    Disp *nodeOWS2;
    Disp *nodeAzerty;
    char *buffertmp = buffer;
    int count = 0;
    int ret = -1;
    char *buffertmp2;
    if (isType(buffer, &nodeType))
    {
        *node = createNode(NULL, nodeType, buffertmp, nodeType->size, media_type);
        buffer = avancerpointeur(&buffer, nodeType->size);
        if (*buffer == '/')
        {
            nodeChar = createNode(NULL, NULL, buffer, 1, __icar);
            nodeType->brother = nodeChar;
            buffer = avancerpointeur(&buffer, 1);
            if (isSubType(buffer, &nodeSubtype))
            {
                nodeChar->brother = nodeSubtype;
                buffer = avancerpointeur(&buffer, nodeSubtype->size);
                buffertmp2 = buffer;
                while (ret == -1 && *buffer!='\0' && !isCRLF(buffer, &nodeAzerty) && *buffer != ' ' && *buffer != 9){
                    if (isOWS(buffer, &nodeOWS1)){
                        buffertmp2 = buffer;
                        if (count == 0)
                        {
                            nodeSubtype->brother = nodeOWS1;
                        }
                        else
                        {
                            nodeParameter->brother = nodeOWS1;
                        }
                        count++;
                        buffer = avancerpointeur(&buffer, nodeOWS1->size);
                        if (*buffer == ';')
                        {
                            nodeChar2 = createNode(NULL, NULL, buffer, 1, __icar);
                            nodeOWS1->brother = nodeChar2;
                            buffer = avancerpointeur(&buffer, 1);
                            if (isOWS(buffer, &nodeOWS2))
                            {
                                nodeChar2->brother = nodeOWS2;
                                buffer = avancerpointeur(&buffer, nodeOWS2->size);
                                if (isParameter(buffer, &nodeParameter))
                                {
                                    nodeOWS2->brother = nodeParameter;
                                    buffer = avancerpointeur(&buffer, nodeParameter->size);
                                }
                                else{
                                    buffer = buffertmp2;
                                    free_arbre(nodeOWS1);
                                    if(count == 1){
                                        nodeSubtype->brother = NULL;
                                        count = 0;
                                    }
                                    else
                                        nodeParameter->brother = NULL;
                                    ret = 0;
                                }
                            }
                            else
                            {
                                buffer = buffertmp2;
                                free_arbre(nodeOWS1);
                                if(count == 1){
                                        nodeSubtype->brother = NULL;
                                        count = 0;
                                    }
                                    else
                                        nodeParameter->brother = NULL;
                                ret = 0;
                            }
                        }
                        else
                        {
                            buffer = buffertmp2;
                            free_arbre(nodeOWS1);
                            if(count == 1){
                                nodeSubtype->brother = NULL;
                                count = 0;
                            }
                            else
                                nodeParameter->brother = NULL;
                            ret = 0;
                        }
                    }
                }
                (*node)->size = buffertmp2 - buffertmp;
                return (true);
            }
        }
        free_arbre(*node);
    }
    return (false);
}

/*----------------CONTENT TYPE HEADER-------------------------*/
bool isContentTypeHeader(char *buffer, Disp **node)
{
    char *buffertmp = buffer;
    Disp *nodeContentTypeHead;
    Disp *nodeOWS1;
    Disp *nodeOWS2;
    Disp *nodeChar;
    Disp *nodeContentType;

    char *contentLengthStr = "Content-Type";
    int len = strlen(contentLengthStr);
    if (strncmp(buffer, contentLengthStr, len) == 0)
    {
        nodeContentTypeHead = createNode(NULL, NULL, contentLengthStr, len, __istring);
        buffer = avancerpointeur(&buffer, len);
        *node = createNode(NULL, nodeContentTypeHead, buffertmp, buffer - buffertmp, Content_Type_header);

        if (*(buffer) == ':')
        {
            nodeChar = createNode(NULL, NULL, buffer, 1, __icar);
            nodeContentTypeHead->brother = nodeChar;
            buffer = avancerpointeur(&buffer, 1);
            if (isOWS(buffer, &nodeOWS1))
            {
                nodeChar->brother = nodeOWS1;
                buffer = avancerpointeur(&buffer, nodeOWS1->size);
                if (isContentType(buffer, &nodeContentType))
                {
                    nodeOWS1->brother = nodeContentType;
                    buffer = avancerpointeur(&buffer, nodeContentType->size);
                    if (isOWS(buffer, &nodeOWS2))
                    {
                        nodeContentType->brother = nodeOWS2;
                        buffer = avancerpointeur(&buffer, nodeOWS2->size);
                        (*node)->size = buffer - buffertmp;
                        return true;
                    }
                }
            }
        }
        free_arbre(*node);
    }
    return false;
}

/*-------------------CONNECTION----------------------------*/
bool isConnection(char *buffer, Disp **node)
{
    int i = 0;
    int j = 0;
    int val = 0;
    char *bufferTmp;
    char *bufferTmp2;
    Disp *nodeOWS;
    Disp *nodeVirgule;
    Disp *nodeConnection;
    Disp *nodeOWS2;
    Disp *nodeTemp;

    bufferTmp = buffer;

    while (*buffer == ',')
    {
        nodeVirgule = createNode(NULL, NULL, buffer, 1, __icar);
        if (i != 0)
        {
            nodeOWS->brother = nodeVirgule;
        }
        else
        {
            *node = createNode(NULL, nodeVirgule, bufferTmp, 1, Connection); // à la fin j'incrémente la taille
        }
        buffer++;
        if (isOWS(buffer, &nodeOWS))
        {
            nodeVirgule->brother = nodeOWS;
            buffer = buffer + nodeOWS->size;
            i++;
        }
    }
    if (isConnectionOption(buffer, &nodeConnection))
    {
        if (i == 0)
        {
            *node = createNode(NULL, nodeConnection, bufferTmp, 1, Connection);
        }
        else
        {
            nodeOWS->brother = nodeConnection;
        }
        buffer = avancerpointeur(&buffer, nodeConnection->size);
        while (*buffer == ',' || *buffer == ' ' || *buffer == 9)
        {
            if (isOWS(buffer, &nodeOWS)){
                bufferTmp2 = buffer;
                if (j == 0)
                {
                    nodeConnection->brother = nodeOWS;
                }
                else
                {
                    if (val == 1)
                    {
                        nodeVirgule->brother = nodeOWS;
                    }
                    else if (val == 2)
                    {
                        nodeConnection->brother = nodeOWS;
                    }
                }
                buffer = avancerpointeur(&buffer, nodeOWS->size);
                if (*buffer == ',')
                {
                    val = 1;
                    nodeVirgule = createNode(NULL, NULL, buffer, 1, __icar);
                    nodeOWS->brother = nodeVirgule;
                    buffer++;
                    bufferTmp2 = buffer;
                    j++;
                    if (isOWS(buffer, &nodeOWS2))
                    {
                        nodeVirgule->brother = nodeOWS2;
                        buffer = avancerpointeur(&buffer, nodeOWS2->size);
                        if(isCRLF(buffer,&nodeTemp)){ // changé
                            buffer = bufferTmp2;
                            free_arbre(nodeOWS2);
                            nodeVirgule->brother = NULL;
                            (*node)->size = buffer - bufferTmp;
                            return(true);
                        }
                        else if (isConnectionOption(buffer, &nodeConnection))
                        {
                            val = 2;
                            nodeOWS2->brother = nodeConnection;
                            buffer = avancerpointeur(&buffer, nodeConnection->size);
                        }
                        else
                        {
                            buffer = bufferTmp2;
                            free_arbre(nodeOWS2); // changé
                            nodeVirgule->brother = NULL;
                        }
                    }
                }
                else{
                    free_arbre(nodeOWS);
                    if(val == 2)
                        nodeConnection->brother = NULL; // changé
                    else if(j == 0)
                        nodeConnection->brother = NULL;
                    else if(val == 1)
                        nodeVirgule->brother = NULL;

                    if(isCRLF(buffer,&nodeTemp)){
                        buffer = bufferTmp2;
                        (*node)->size = buffer - bufferTmp;
                        return(true);
                    }
                    else
                        buffer = bufferTmp2;
                }
            }
        }
        (*node)->size = buffer - bufferTmp;
        return (true);
    }
    free_arbre(*node);
    return (false);
}

/*-----------------------CONNECTION OPTION---------------------*/
bool isConnectionOption(char *buffer, Disp **node)
{

    Disp *nodeToken;
    char *bufferTmp = buffer;

    if (isToken(buffer, &nodeToken))
    {
        *node = createNode(NULL, nodeToken, bufferTmp, nodeToken->size, connection_option);
        return (true);
    }
    return false;
}

/*----------------CONNECTION HEADER--------------------------*/
bool isConnectionHeader(char *buffer, Disp **node)
{
    char *connectionStr = "Connection";
    char *bufferTmp = buffer;
    Disp *nodeOWS;
    Disp *nodeChar;
    Disp *nodeConnection;
    Disp *nodeString;
    int len = strlen(connectionStr);

    if (strncmp(buffer, connectionStr, len) == 0 && *(buffer + len) == ':')
    {
        buffer += len;
        nodeChar = createNode(NULL, NULL, buffer, 1, __icar);
        nodeString = createNode(nodeChar, NULL, bufferTmp, len, __istring);
        *node = createNode(NULL, nodeString, bufferTmp, len, Connection_header);
        buffer++;
        if (isOWS(buffer, &nodeOWS))
        {
            nodeChar->brother = nodeOWS;
            buffer = avancerpointeur(&buffer, nodeOWS->size);
            if (isConnection(buffer, &nodeConnection))
            {
                nodeOWS->brother = nodeConnection;
                buffer = avancerpointeur(&buffer, nodeConnection->size);
                if (isOWS(buffer, &nodeOWS))
                {
                    nodeConnection->brother = nodeOWS;
                    buffer = avancerpointeur(&buffer, nodeOWS->size);
                    (*node)->size = buffer - bufferTmp;
                    return (true);
                }
            }
        }
        free_arbre(*node);
    }
    return false;
}

/*-----------------COOKIE NAME--------------------------*/
bool isCookieName(char *buffer, Disp **node)
{
    Disp *nodeToken;
    char *ptrTmp = buffer;

    if (isToken(buffer, &nodeToken))
    {
        *node = createNode(NULL, nodeToken, ptrTmp, nodeToken->size, cookie_name);
        return (true);
    }
    return (false);
}

/*------------------COOKIE OCTET------------------------*/
bool isCookieOctet(char *buffer, Disp **node)
{

    if (*buffer == 33 || (*buffer >= 35 && *buffer <= 43) || (*buffer >= 45 && *buffer <= 58) || (*buffer >= 60 && *buffer <= 91) || (*buffer >= 93 && *buffer <= 126))
    {
        *node = createNode(NULL, NULL, buffer, 1, cookie_octet);
        return (true);
    }
    return (false);
}

/*------------------COOKIE VALUE------------------------*/

bool isCookieValue(char *buffer, Disp **node)
{
    char *bufferTmp = buffer;
    char *bufferTmp2;
    Disp *nodeChar;
    Disp *nodeChar2;
    Disp *CookieOctet;
    Disp *nodeTmp;
    int count = 0;

    if (*buffer == '"')
    {
        nodeChar = createNode(NULL, NULL, buffer, 1, __icar);
        *node = createNode(NULL, nodeChar, buffer, 1, cookie_value);
        buffer++;
        bufferTmp2 = buffer;
        while (isCookieOctet(buffer, &CookieOctet))
        {
            if (count == 0)
            {
                nodeChar->brother = CookieOctet;
            }
            else
            {
                nodeTmp->brother = CookieOctet;
            }
            nodeTmp = CookieOctet;
            buffer++;
            count++;
        }
        if (*buffer != '"')
        {
            if(count == 1)
                nodeChar->brother = NULL; // changé
            else
                nodeTmp->brother = NULL;
            buffer = bufferTmp2;
            free_arbre(*node);
        }
        else
        {
            nodeChar2 = createNode(NULL, NULL, buffer, 1, __icar);
            if (count == 0)
            {
                nodeChar->brother = nodeChar2;
            }
            else
            {
                nodeTmp->brother = nodeChar2;
            }
            buffer++; // changé 
            (*node)->size = buffer - bufferTmp;
            return (true);
        }
    }
    count = 0;
    buffer = bufferTmp;
    while (isCookieOctet(buffer, &CookieOctet))
    {
        if (count == 0)
        {
            *node = createNode(NULL, CookieOctet, bufferTmp, 1, cookie_value);
        }
        else
        {
            nodeTmp->brother = CookieOctet;
        }
        nodeTmp = CookieOctet;
        buffer++;
        count++;
    }
    if(count == 0)
        *node = createNode(NULL,NULL,buffer,0,cookie_value);
    (*node)->size = buffer - bufferTmp;
    return (true);
}

/*--------------------------COOKIE PAIR---------------------------*/
bool isCookiePair(char *buffer, Disp **node)
{
    Disp *CookieName;
    Disp *CookieValue;
    Disp *NodeChar;
    char *ptrTmp = buffer;

    if (isCookieName(buffer, &CookieName))
    {
        *node = createNode(NULL, CookieName, ptrTmp, 1, cookie_pair); // Actualiser la size
        buffer = avancerpointeur(&buffer, CookieName->size);
        if (*buffer == '=')
        {
            NodeChar = createNode(NULL, NULL, buffer, 1, __icar);
            CookieName->brother = NodeChar;
            buffer++;
            if (isCookieValue(buffer, &CookieValue))
            {
                NodeChar->brother = CookieValue;
                buffer = avancerpointeur(&buffer, CookieValue->size);
                (*node)->size = buffer - ptrTmp;
                return (true);
            }
            else
            {
                free_arbre(*node);
            }
        }
        else
        {
            free_arbre(*node);
        }
    }
    return (false);
}
/*--------------------------COOKIE STRING---------------------------*/

bool isCookieString(char *buffer, Disp **node)
{
    Disp *CookiePair;
    Disp *SP;
    Disp *CookiePair2;
    Disp *nodeChar;
    int i = 0;
    char *ptrTmp = buffer;
    char *bufferTmp2;
    int ret = -1;
    Disp *nodeAzerty;

    if (isCookiePair(buffer, &CookiePair))
    {
        *node = createNode(NULL, CookiePair, ptrTmp, 1, cookie_string);
        buffer = avancerpointeur(&buffer,CookiePair->size);
        while(ret == -1 && *buffer!='\0' && !isCRLF(buffer, &nodeAzerty) && *buffer != ' ' && *buffer != 9){
            if (*buffer == ';'){
                nodeChar = createNode(NULL,NULL,buffer,1,__icar);
                bufferTmp2 = buffer;
                if (i == 0)
                {
                    CookiePair->brother = nodeChar;
                }
                else
                {
                    CookiePair2->brother = nodeChar;
                }
                i++;
                buffer = avancerpointeur(&buffer, nodeChar->size);
                if (*buffer == ' '){
                    SP = createNode(NULL, NULL, buffer, 1, __sp);
                    nodeChar->brother = SP;
                    buffer = avancerpointeur(&buffer, 1);
                    if (isCookiePair(buffer,&CookiePair2)){
                        SP->brother = CookiePair2;
                        buffer = avancerpointeur(&buffer, CookiePair2->size);
                    }
                    else{
                        buffer = bufferTmp2;
                        free_arbre(nodeChar);
                        if(i == 1){
                            CookiePair->brother = NULL;
                            i = 0;
                        }
                        else
                            CookiePair2->brother = NULL; // changé
                        ret = 0;
                    }
                }
                else
                {
                    buffer = bufferTmp2;
                    free_arbre(nodeChar);
                    if(i == 1){
                        CookiePair->brother = NULL;
                        i = 0;
                    }
                    else
                        CookiePair2->brother = NULL; // changé
                    ret = 0;
                }
            }
        }
        (*node)->size = buffer - ptrTmp;
        return (true);
    }
    return(false); // corrigé
}

/*--------------------------COOKIE HEADER---------------------------*/
bool isCookieHeader(char *buffer, Disp **node)
{
    char *cookieStr = "Cookie";
    int len = strlen(cookieStr);
    char *ptr = buffer;
    Disp *nodeOWS;
    Disp *nodeChar;
    Disp *nodeString;
    Disp *nodeCookie;

    if (strncmp(buffer, cookieStr, len) == 0 && *(buffer + len) == ':')
    {
        buffer += len;
        nodeChar = createNode(NULL, NULL, buffer, 1, __icar);
        nodeString = createNode(nodeChar, NULL, ptr, len, __istring);
        *node = createNode(NULL, nodeString, ptr, len, cookie_header);
        buffer++;
        if (isOWS(buffer, &nodeOWS))
        {
            nodeChar->brother = nodeOWS;
            buffer = avancerpointeur(&buffer, nodeOWS->size);
            if (isCookieString(buffer, &nodeCookie))
            {
                nodeOWS->brother = nodeCookie;
                buffer = avancerpointeur(&buffer, nodeCookie->size);
                if (isOWS(buffer, &nodeOWS))
                {
                    nodeCookie->brother = nodeOWS;
                    buffer = avancerpointeur(&buffer, nodeOWS->size);
                    (*node)->size = buffer - ptr;
                    return (true);
                }
            }
        }
        free_arbre(*node);
    }
    return false;
}

bool isExpect(char *buffer, Disp **node)
{
    char *contentLengthStr = "100-continue";
    int len = strlen(contentLengthStr);
    if (strncmp(buffer, contentLengthStr, len) == 0)
    {
        *node = createNode(NULL, NULL, buffer, len, expect);
        buffer += len;
        return true;
    }
    return false;
}

bool isExpectHeader(char *buffer, Disp **node)
{
    char *buffertmp = buffer;
    Disp *nodeExpect;
    Disp *nodeOWS1;
    Disp *nodeOWS2;
    Disp *nodeChar;
    Disp *nodeExpectType;

    char *expectttt = "Expect";
    int len = strlen(expectttt);
    if (strncmp(buffer, expectttt, len) == 0)
    {
        nodeExpect = createNode(NULL, NULL, buffertmp, len, __istring);
        buffer = avancerpointeur(&buffer, len);
        *node = createNode(NULL, nodeExpect, buffertmp, buffer - buffertmp, expect_header);

        if (*(buffer) == ':')
        {
            nodeChar = createNode(NULL, NULL, buffer, 1, __icar);
            nodeExpect->brother = nodeChar;
            buffer = avancerpointeur(&buffer, 1);
            if (isOWS(buffer, &nodeOWS1))
            {
                nodeChar->brother = nodeOWS1;
                buffer = avancerpointeur(&buffer, nodeOWS1->size);
                if (isExpect(buffer, &nodeExpectType))
                {
                    nodeOWS1->brother = nodeExpectType;
                    buffer = avancerpointeur(&buffer, nodeExpectType->size);
                    if (isOWS(buffer, &nodeOWS2))
                    {
                        nodeExpectType->brother = nodeOWS2;
                        buffer = avancerpointeur(&buffer, nodeOWS2->size);
                        return true;
                    }
                }
            }
        }
        free_arbre(*node);
    }
    return false;
}


/*--------------------DEC OCTET--------------------------*/
bool isDecOctet(char *buffer, Disp **node){
    char *buffertmp=buffer;

    if(strncmp(buffer, "25", 2) == 0){
        *node= createNode(NULL,NULL,buffer,2,dec_octet);
        buffer = avancerpointeur(&buffer,2);
        if((*buffer<=53)&&(*buffer>=48)){
            buffer++;
            (*node)->size=buffer-buffertmp;
            return true;
        }else{
            buffer = buffertmp;
            free_arbre(*node);
        }
    }
    if(strncmp(buffer, "2", 1) == 0){
        *node= createNode(NULL,NULL,buffer,1,dec_octet);
        buffer = avancerpointeur(&buffer,1);
        if((*buffer<=52)&&(*buffer>=48)){
            buffer = avancerpointeur(&buffer,1);
            if(isDigit(buffer)){
                buffer++;
                (*node)->size=buffer-buffertmp; //verif
                return true;
            }
        }
        buffer = buffertmp;
        free_arbre(*node);
    }
    if(*buffer == '1'){
        *node = createNode(NULL,NULL,buffer,1,dec_octet);
        buffer++;
        if(isDigit(buffer)){
            buffer = avancerpointeur(&buffer,1);
            if(isDigit(buffer)){
                buffer++;
                (*node)->size=buffer-buffertmp;
                return true;
            }      
        } 
        buffer = buffertmp;
        free_arbre(*node);
    }

    if((*buffer<=57)&&(*buffer>=49)){
        *node= createNode(NULL,NULL,buffer,1,dec_octet);
        buffer = avancerpointeur(&buffer,1);
        if(isDigit(buffer)){
            buffer++;
            (*node)->size=buffer-buffertmp;
            return true;
        }else{
            buffer = buffertmp;
            free_arbre(*node);
        }
    }
    if(isDigit(buffer)){
        *node= createNode(NULL,NULL,buffer,1,dec_octet);
        buffer = avancerpointeur(&buffer,1); 
        return true;
    }
    return(false);
}

/*--------------------IPV4 ADRR--------------------------*/
bool isIPv4address(char *buffer, Disp **node){
    Disp * nodeValue;
    Disp * nodeChar;
    char *bufferTmp = buffer;

    if(isDecOctet(buffer,&nodeValue)){
        *node = createNode(NULL,nodeValue,bufferTmp,nodeValue->size,IPv4address);
        buffer = avancerpointeur(&buffer,nodeValue->size);
        if(*buffer == '.'){
            nodeChar = createNode(NULL,NULL,buffer,1,__icar);
            nodeValue->brother = nodeChar;
            buffer++;
            if(isDecOctet(buffer,&nodeValue)){
                nodeChar->brother = nodeValue;
                buffer = avancerpointeur(&buffer,nodeValue->size);
                if(*buffer == '.'){
                    nodeChar = createNode(NULL,NULL,buffer,1,__icar);
                    nodeValue->brother = nodeChar;
                    buffer++;
                    if(isDecOctet(buffer,&nodeValue)){
                        nodeChar->brother = nodeValue;
                        buffer = avancerpointeur(&buffer,nodeValue->size);
                        if(*buffer == '.'){
                            nodeChar = createNode(NULL,NULL,buffer,1,__icar);
                            nodeValue->brother = nodeChar;
                            buffer++;
                            if(isDecOctet(buffer,&nodeValue)){
                                nodeChar->brother = nodeValue;
                                buffer = avancerpointeur(&buffer,nodeValue->size);
                                (*node)->size = buffer - bufferTmp;
                                return(true);
                            }
                        }
                    }
                }
            }
        }
        free_arbre(*node);
    }
    return(false);
}

bool isRegName(char *buffer, Disp **node){
    char *bufferTmp=buffer;
    int count =0;
    while(isUnreserved(buffer)||isPctEncoded(buffer)||isSubDelims(buffer)){
        if(isPctEncoded(buffer)){
            buffer+=3;
        }
        else{
            buffer++;
        }
        count++;
    }
    if(count>0){
        *node=createNode(NULL,NULL, bufferTmp, buffer-bufferTmp, reg_name);
    }
    else{
        *node=createNode(NULL,NULL, bufferTmp, 0, reg_name);
    }
    return(true);
}

bool isIPLiteral(char *buffer, Disp **node){
    Disp *nodeIPv6;
    Disp *nodeChar;
    char *bufferTmp=buffer;
    if(*buffer=='['){
        nodeChar=createNode(NULL, NULL, buffer, 1, __icar);
        *node=createNode(NULL, nodeChar, bufferTmp, 1, IP_literal);
        buffer++;
        if(isIPv6address(buffer, &nodeIPv6)||isIPvFuture(buffer, &nodeIPv6)){
            nodeChar->brother=nodeIPv6;
            buffer=avancerpointeur(&buffer, nodeIPv6->size);
            if(*buffer==']'){
                nodeChar=createNode(NULL, NULL, buffer, 1, __icar);
                nodeIPv6->brother=nodeChar;
                buffer++;
                (*node)->size=buffer-bufferTmp;
                return(true);
            }
        }
        free_arbre(*node);
    }
    return(false);
}

bool isIPvFuture(char *buffer, Disp **node){
    char *bufferTmp=buffer;
    Disp *nodeChar;
    Disp *nodeTmp2;
    Disp *nodeTmp3;
    Disp *nodeTmp;
    Disp *nodeDigit;
    int i=0;
    if(*buffer=='v'){
        nodeChar=createNode(NULL,NULL, buffer, 1, __icar);
        *node=createNode(NULL, nodeChar, bufferTmp, 1, IPvFuture);
        buffer++;
        while(isHexdigit(buffer, &nodeDigit)){
            if(i==0){
                nodeChar->brother=nodeDigit;
            }
            else{
                nodeTmp2->brother=nodeDigit;
            }
            nodeTmp2=nodeDigit;
            buffer++;
            i++;
        }
        if(i==0){
            free_arbre(*node);
            return(false);
        }
        i=0;
        if(*buffer=='.'){
            nodeChar=createNode(NULL, NULL, buffer, 1, __icar);
            nodeDigit->brother=nodeChar;
            buffer++;
            while(isUnreserved(buffer)||isSubDelims(buffer)||*buffer==':'){
                nodeTmp=createNode(NULL, NULL, buffer, 1, __icar);
                if(i==0){
                    nodeChar->brother=nodeTmp;
                }
                else{
                    nodeTmp->brother=nodeTmp3;
                }
                nodeTmp3=nodeTmp;
                i++;
                buffer++;
            }
            if(i!=0){
                (*node)->size=buffer-bufferTmp;
                return(true);
            }
        }
        free_arbre(*node);
    }
    return(false);
}
bool isIPv6address(char *buffer, Disp **node){
    char *bufferTmp=buffer;
    char *string="::";
    char *bufferTmp2=buffer;
    Disp *nodeH16;
    Disp *nodeChar;
    Disp *nodeLs32;
    int opt=0;
    int i=0;
    int ret=0;

    //Cas 1: 6 (h16  ls32
    for(i=0;i<6;i++){
        if(isH16(buffer, &nodeH16)){
            if (i==0){
                *node=createNode(NULL, nodeH16, bufferTmp, 1, IPv6address);
            }
            else{
                nodeChar->brother=nodeH16;
            }
            buffer=avancerpointeur(&buffer, nodeH16->size);
            if(*buffer==':'){
                nodeChar=createNode(NULL, NULL, buffer, 1, __icar);
                nodeH16->brother=nodeChar;
                buffer++;
            }
            else{
                free_arbre(*node);
                break;
            }
        }
        else{
            if(i!=0){
                free_arbre(*node);
            }
            break;
        }
    }
    if(i==6){
        if(isLs32(buffer, &nodeLs32)){
            nodeChar->brother=nodeLs32;
            buffer = avancerpointeur(&buffer, nodeLs32->size);
            (*node)->size=buffer-bufferTmp;
            return(true);
        }
        free_arbre(*node);
    }

    //Cas 2: :: 5 (h16  ls32
    buffer=bufferTmp;
    i=0;
    if(strncmp(string, buffer, 2)==0){
        nodeChar=createNode(NULL,NULL, "::", 2, __istring);
        *node=createNode(NULL, nodeChar, buffer, 2, IPv6address);
        buffer =avancerpointeur(&buffer, nodeChar->size);
        for(i=0;i<5;i++){
            if(isH16(buffer, &nodeH16)){
                nodeChar->brother=nodeH16;
                buffer=avancerpointeur(&buffer, nodeH16->size);
                if(*buffer==':'){
                    nodeChar=createNode(NULL, NULL, buffer, 1, __icar);
                    nodeH16->brother=nodeChar;
                    buffer++;
                }
                else{
                    free_arbre(*node);
                    break;
                }
            }
            else
            {
                free_arbre(*node);
                break;
            }
        }
    }
    if(i==5){
        if(isLs32(buffer, &nodeLs32)){
            nodeChar->brother=nodeLs32;
            buffer = avancerpointeur(&buffer, nodeLs32->size);
            (*node)->size=buffer-bufferTmp;
            return(true);
        }
        free_arbre(*node);
    }

    //Cas 3: [h16] :: 4 (h16  ls32
    i=0;
    buffer=bufferTmp;
    if(isH16(buffer, &nodeH16)){
        opt=1;
        *node=createNode(NULL, nodeH16, buffer, 2, IPv6address);
        buffer=avancerpointeur(&buffer, nodeH16->size);
    }
    if(strncmp(string, buffer, 2)==0){
        nodeChar=createNode(NULL,NULL, "::", 2, __istring);
        if(opt!=1){
            *node=createNode(NULL, nodeChar, buffer, 2, IPv6address);
        }
        else{
            nodeH16->brother=nodeChar;
        }
        buffer =avancerpointeur(&buffer, nodeChar->size);
        for(i=0;i<4;i++){
            if(isH16(buffer, &nodeH16)){
                nodeChar->brother=nodeH16;
                buffer=avancerpointeur(&buffer, nodeH16->size);
                if(*buffer==':'){
                    nodeChar=createNode(NULL, NULL, buffer, 1, __icar);
                    nodeH16->brother=nodeChar;
                    buffer++;
                }
                else{
                    free_arbre(*node);
                    break;
                }
            }
            else
            {
                free_arbre(*node);
                break;
            }
        }
    }
    if(i==4){
        if(isLs32(buffer, &nodeLs32)){
            nodeChar->brother=nodeLs32;
            buffer = avancerpointeur(&buffer, nodeLs32->size);
            (*node)->size=buffer-bufferTmp;
            return(true);
        }
        free_arbre(*node);
    }

    //Cas 4: [h16 *1 (: h16)] :: 4 (h16  ls32
    i=0;
    buffer=bufferTmp;
    bufferTmp2=bufferTmp;
    opt=0;
    if(isH16(buffer, &nodeH16)){
        *node=createNode(NULL, nodeH16, buffer, 2, IPv6address);
        buffer=avancerpointeur(&buffer, nodeH16->size);
        bufferTmp2=buffer;
        if(*buffer==':'){
            nodeChar=createNode(NULL, NULL, buffer, 1, __icar);
            nodeH16->brother=nodeChar;
            buffer++;
            if(isH16(buffer, &nodeH16)){
                nodeChar->brother=nodeH16;
                buffer=avancerpointeur(&buffer, nodeH16->size);
            }
            else{
                free_arbre(nodeChar);
                nodeH16->brother=NULL;
                buffer=bufferTmp2;
            }
        }
        opt=1;
    }
    if(strncmp(string, buffer, 2)==0){
        nodeChar=createNode(NULL,NULL, "::", 2, __istring);
        if(opt!=1){
            *node=createNode(NULL, nodeChar, buffer, 2, IPv6address);
        }
        else{
            nodeH16->brother=nodeChar;
        }
        buffer =avancerpointeur(&buffer, nodeChar->size);
        for(i=0;i<3;i++){
            if(isH16(buffer, &nodeH16)){
                nodeChar->brother=nodeH16;
                buffer=avancerpointeur(&buffer, nodeH16->size);
                if(*buffer==':'){
                    nodeChar=createNode(NULL, NULL, buffer, 1, __icar);
                    nodeH16->brother=nodeChar;
                    buffer++;
                }
                else{
                    free_arbre(*node);
                    break;
                }
            }
            else
            {
                free_arbre(*node);
                break;
            }
        }
    }
    if(i==3){
        if(isLs32(buffer, &nodeLs32)){
            nodeChar->brother=nodeLs32;
            buffer = avancerpointeur(&buffer, nodeLs32->size);
            (*node)->size=buffer-bufferTmp;
            return(true);
        }
        free_arbre(*node);
    }

    //Cas 5: [h16 *2 (: h16)] :: 2 (h16  ls32
    i=0;
    bufferTmp2=bufferTmp;
    buffer=bufferTmp;
    opt=0;
    ret=0;
    if(isH16(buffer, &nodeH16)){
        *node=createNode(NULL,NULL, buffer, nodeH16->size, IPv6address);
        buffer =avancerpointeur(&buffer, nodeH16->size);
        bufferTmp2=buffer;
        while(i<2 && ret !=1){
            if(*buffer==':'){
                nodeChar=createNode(NULL,NULL, buffer, 1, __icar);
                nodeH16->brother=nodeChar;
                buffer++;
                if(isH16(buffer, &nodeH16)){
                    nodeChar->brother=nodeH16;
                    buffer=avancerpointeur(&buffer, nodeH16->size);
                    i++;
                    bufferTmp2=buffer;
                }
                else{
                    free_arbre(nodeChar);
                    nodeH16->brother=NULL;
                    ret=1;
                }
            }
            else{
                ret=1;
            }
        }
        opt=1;
    }
    buffer=bufferTmp2;
    i=0;
    //optionnel
    if(strncmp(string, buffer, 2)==0){
        nodeChar=createNode(NULL,NULL, "::", 2, __istring);
        if(opt!=1){
            *node=createNode(NULL, nodeChar, buffer, 2, IPv6address);
        }
        else{
            nodeH16->brother=nodeChar;
        }
        buffer =avancerpointeur(&buffer, nodeChar->size);
        for(i=0;i<2;i++){
            if(isH16(buffer, &nodeH16)){
                nodeChar->brother=nodeH16;
                buffer=avancerpointeur(&buffer, nodeH16->size);
                if(*buffer==':'){
                    nodeChar=createNode(NULL, NULL, buffer, 1, __icar);
                    nodeH16->brother=nodeChar;
                    buffer++;
                }
                else{
                    free_arbre(*node);
                    break;
                }
            }
            else
            {
                free_arbre(*node);
                break;
            }
        }
    }
    if(i==2){
        if(isLs32(buffer, &nodeLs32)){
            nodeChar->brother=nodeLs32;
            buffer = avancerpointeur(&buffer, nodeLs32->size);
            (*node)->size=buffer-bufferTmp;
            return(true);
        }
        free_arbre(*node);
    }

    //Cas 6: [h16 3 (h16  :: h16 : ls32
    i=0;
    buffer=bufferTmp;
    bufferTmp2=bufferTmp;
    opt=0;
    ret=0;
    if(isH16(buffer, &nodeH16)){
        *node=createNode(NULL,NULL, buffer, nodeH16->size, IPv6address);
        buffer =avancerpointeur(&buffer, nodeH16->size);
        bufferTmp2=buffer;
        while(i<3 && ret !=1){
            if(*buffer==':'){
                nodeChar=createNode(NULL,NULL, buffer, 1, __icar);
                nodeH16->brother=nodeChar;
                buffer++;
                if(isH16(buffer, &nodeH16)){
                    nodeChar->brother=nodeH16;
                    buffer=avancerpointeur(&buffer, nodeH16->size);
                    bufferTmp2=buffer;
                    i++;
                }
                else{
                    free_arbre(nodeChar);
                    nodeH16->brother=NULL;
                    ret=1;
                }
            }
            else{
                ret=1;
            }
        }
        opt=1;
    }
    buffer=bufferTmp2;
    i=0;
    if(strncmp(string, buffer, 2)==0){
        nodeChar=createNode(NULL,NULL, "::", 2, __istring);
        if(opt!=1){
            *node=createNode(NULL, nodeChar, buffer, 2, IPv6address);
        }
        else{
            nodeH16->brother=nodeChar;
        }
        buffer =avancerpointeur(&buffer, nodeChar->size);
        if(isH16(buffer, &nodeH16)){
            nodeChar->brother=nodeH16;
            buffer=avancerpointeur(&buffer, nodeH16->size);
            if(*buffer==':'){
                nodeChar=createNode(NULL, NULL, buffer, 1, __icar);
                nodeH16->brother=nodeChar;
                buffer++;
                if(isLs32(buffer, &nodeLs32)){
                    nodeChar->brother=nodeLs32;
                    buffer = avancerpointeur(&buffer, nodeLs32->size);
                    (*node)->size=buffer-bufferTmp;
                    return(true);
                }
            }
        }
        free_arbre(*node);
    }



    //Cas 7: [h16 4 (h16  :: ls32
    i=0;
    buffer=bufferTmp;
    bufferTmp2=bufferTmp;
    opt=0;
    ret=0;
    if(isH16(buffer, &nodeH16)){
        *node=createNode(NULL,NULL, buffer, nodeH16->size, IPv6address);
        buffer =avancerpointeur(&buffer, nodeH16->size);
        bufferTmp2=buffer;
        while(i<4 && ret !=1){
            if(*buffer==':'){
                nodeChar=createNode(NULL,NULL, buffer, 1, __icar);
                nodeH16->brother=nodeChar;
                buffer++;
                if(isH16(buffer, &nodeH16)){
                    nodeChar->brother=nodeH16;
                    buffer=avancerpointeur(&buffer, nodeH16->size);
                    bufferTmp2=buffer;
                    i++;
                }
                else{
                    free_arbre(nodeChar);
                    nodeH16->brother=NULL;
                    ret=1;
                }
            }
            else{
                ret=1;
            }
        }
        opt=1;
    }
    buffer=bufferTmp2;
    if(strncmp(string, buffer, 2)==0){
        nodeChar=createNode(NULL,NULL, "::", 2, __istring);
        if(opt!=1){
            *node=createNode(NULL, nodeChar, buffer, 2, IPv6address);
        }
        else{
            nodeH16->brother=nodeChar;
        }
        buffer =avancerpointeur(&buffer, nodeChar->size);
        if(isLs32(buffer, &nodeLs32)){
            nodeChar->brother=nodeLs32;
            buffer =avancerpointeur(&buffer, nodeLs32->size);
            (*node)->size=buffer-bufferTmp;
            return(true);
        }
        free_arbre(*node);
    }

    i=0;
    buffer=bufferTmp;
    bufferTmp2=bufferTmp;
    opt=0;
    ret=0;
    if(isH16(buffer, &nodeH16)){
        *node=createNode(NULL,NULL, buffer, nodeH16->size, IPv6address);
        buffer =avancerpointeur(&buffer, nodeH16->size);
        bufferTmp2=buffer;
        while(i<5 && ret !=1){
            if(*buffer==':'){
                nodeChar=createNode(NULL,NULL, buffer, 1, __icar);
                nodeH16->brother=nodeChar;
                buffer++;
                if(isH16(buffer, &nodeH16)){
                    nodeChar->brother=nodeH16;
                    buffer=avancerpointeur(&buffer, nodeH16->size);
                    bufferTmp2=buffer;
                    i++;
                }
                else{
                    free_arbre(nodeChar);
                    nodeH16->brother=NULL;
                    ret=1;
                }
            }
            else{
                ret=1;
            }
        }
        opt=1;
    }
    i=0;
    if(strncmp(string, buffer, 2)==0){
        nodeChar=createNode(NULL,NULL, "::", 2, __istring);
        if(opt!=1){
            *node=createNode(NULL, nodeChar, buffer, 2, IPv6address);
        }
        else{
            nodeH16->brother=nodeChar;
        }
        buffer =avancerpointeur(&buffer, nodeChar->size);
        if(isH16(buffer, &nodeH16)){
            nodeChar->brother=nodeH16;
            buffer =avancerpointeur(&buffer, nodeH16->size);
            (*node)->size=buffer-bufferTmp;
            return(true);
        }
        free_arbre(*node);
    }

    i=0;
    buffer=bufferTmp;
    bufferTmp2=bufferTmp;
    opt=0;
    ret=0;
    if(isH16(buffer, &nodeH16)){
        *node=createNode(NULL,NULL, buffer, nodeH16->size, IPv6address);
        buffer =avancerpointeur(&buffer, nodeH16->size);
        bufferTmp2=buffer;
        while(i<6 && ret !=1){
            if(*buffer==':'){
                nodeChar=createNode(NULL,NULL, buffer, 1, __icar);
                nodeH16->brother=nodeChar;
                buffer++;
                if(isH16(buffer, &nodeH16)){
                    nodeChar->brother=nodeH16;
                    buffer=avancerpointeur(&buffer, nodeH16->size);
                    bufferTmp2=buffer;
                    i++;
                }
                else{
                    free_arbre(nodeChar);
                    ret=1;
                }
            }
            else{
                ret=1;
            }
        }
        opt=1;
    }
    //optionnel
    if(strncmp(string, buffer, 2)==0){
        nodeChar=createNode(NULL,NULL, "::", 2, __istring);
        if(opt!=1){
            *node=createNode(NULL, nodeChar, buffer, 2, IPv6address);
        }
        else{
            nodeH16->brother=nodeChar;
        }
        buffer =avancerpointeur(&buffer, nodeChar->size);
        return(true);
    }
    return(false);
}


bool isH16(char *buffer, Disp **node){
    Disp *nodeHexdig;
    Disp *nodeTmp;
    char *bufferTmp=buffer;
    int ret =0;
    int i=0;

    while(i<4 && ret !=1){
        if(isHexdigit(buffer, &nodeHexdig)){
            if(i==0){
                *node=createNode(NULL,nodeHexdig, buffer, nodeHexdig->size, h16);
            }
            else{
                nodeTmp->brother=nodeHexdig;
            }
            nodeTmp=nodeHexdig;
            buffer++;
            i++;
        }
        else{
            ret =1;
        }
    }
    if(i==0){
        return(false);
    }
    (*node)->size=buffer-bufferTmp;
    return(true);
}

bool isLs32(char *buffer, Disp **node){
    char *bufferTmp=buffer;
    Disp *nodeH16;
    Disp *nodeChar;
    Disp *nodeIP;
    if(isH16(buffer, &nodeH16)){
        *node=createNode(NULL,nodeH16, buffer, nodeH16->size, ls32);
        buffer=avancerpointeur(&buffer, nodeH16->size);
        if(*buffer==':'){
            nodeChar =createNode(NULL, NULL, buffer, 1, __icar);
            nodeH16->brother=nodeChar;
            buffer++;
            if(isH16(buffer, &nodeH16)){
                nodeChar->brother=nodeH16;
                buffer=avancerpointeur(&buffer, nodeH16->size);
                (*node)->size = buffer-bufferTmp;
                return(true);
            }
        }
        free_arbre(*node);
        buffer=bufferTmp;
    }
    if(isIPv4address(buffer, &nodeIP)){
        *node=createNode(NULL, nodeIP, buffer, nodeIP->size, ls32);
        return(true);
    }
    return(false);
}

bool isHost(char *buffer, Disp **node){
    char *bufferTmp = buffer;
    Disp *nodeUri;
    Disp *nodeCHar;
    Disp *nodePort;

    if(isUriHost(buffer,&nodeUri)){
        *node = createNode(NULL,nodeUri,buffer,nodeUri->size,Host);
        buffer = avancerpointeur(&buffer,nodeUri->size);
        if(*buffer == ':'){
            nodeCHar = createNode(NULL,NULL,buffer,1,__icar);
            nodeUri->brother = nodeCHar;
            buffer++;
            if(isPort(buffer,&nodePort)){
                nodeCHar->brother = nodePort;
                buffer = avancerpointeur(&buffer,nodePort->size);
                (*node)->size = buffer - bufferTmp;
                return(true);
            }
        }
        return(true);
    }
    return(false);
}

bool isPort(char *buffer, Disp **node){
    char *bufferTmp = buffer;
    
    while(isDigit(buffer)){
        buffer++;
    }
    *node = createNode(NULL,NULL,bufferTmp,buffer-bufferTmp,port);
    return(true);
}

bool isUriHost(char *buffer, Disp **node){
    Disp *nodeHost;

    if(ishost(buffer,&nodeHost)){
        *node = createNode(NULL,nodeHost,buffer,nodeHost->size,uri_host);
        return(true);
    }
    return(false);
}


bool ishost(char *buffer, Disp **node){
    Disp * nodeIP;
    char *bufferTmp = buffer;

    if(isIPv4address(buffer,&nodeIP)||isIPLiteral(buffer, &nodeIP)||isRegName(buffer, &nodeIP)){
        *node = createNode(NULL,nodeIP,bufferTmp,nodeIP->size,host);
        return(true);
    }
    return(false);
}

bool isHostHeader(char *buffer, Disp **node){
    char *hostStr = "Host";
    int len = strlen(hostStr);
    char *ptr = buffer;
    Disp *nodeOWS1;
    Disp *nodeOWS2;
    Disp *nodeChar;
    Disp *nodeString;
    Disp *nodeHost;

    if (strncmp(buffer, hostStr, len) == 0 && *(buffer + len) == ':') {
        buffer += len;
        nodeChar = createNode(NULL,NULL,buffer,1,__icar);
        nodeString = createNode(nodeChar,NULL,ptr,len,__istring);
        *node = createNode(NULL, nodeString, ptr, len, Host_header);
        buffer++;
        if(isOWS(buffer,&nodeOWS1)){
            nodeChar->brother=nodeOWS1;
            buffer= avancerpointeur(&buffer,nodeOWS1->size);
            if(isHost(buffer,&nodeHost)){
                nodeOWS1->brother=nodeHost;
                buffer= avancerpointeur(&buffer,nodeHost->size);
                if(isOWS(buffer,&nodeOWS2)){
                    nodeHost->brother=nodeOWS2;
                    buffer= avancerpointeur(&buffer,nodeOWS2->size);
                    (*node)->size = buffer - ptr;
                    return true;
                }
            }
        }
        free_arbre(*node); 
    }
    return false;
}


/*------------------BWS--------------------------------*/
bool isBWS(char *buffer, Disp **node){
    Disp *nodeOWS;
    if(isOWS(buffer, &nodeOWS)){
        *node=createNode(NULL, nodeOWS, buffer, nodeOWS->size, BWS);
        return(true);
    }
    return(false);
}


/*--------------TRANSFER PARAMETER----------------------*/
bool isTransferParameter(char *buffer, Disp **node){
    char *bufferTmp=buffer;
    Disp *nodeToken;
    Disp *nodeBWS;
    Disp *nodeBWS2;
    Disp *nodeValue;
    Disp *nodeChar;
    if(isToken(buffer, &nodeToken)){
        *node=createNode(NULL, nodeToken, bufferTmp, nodeToken->size, transfer_parameter);
        buffer=avancerpointeur(&buffer, nodeToken->size);
        if(isBWS(buffer, &nodeBWS)){
            nodeToken->brother=nodeBWS;
            buffer=avancerpointeur(&buffer, nodeBWS->size);
            if(*buffer=='='){
                nodeChar=createNode(NULL, NULL, buffer, 1, __icar);
                nodeBWS->brother=nodeChar;
                buffer++;
                if(isBWS(buffer, &nodeBWS2)){
                    nodeChar->brother=nodeBWS2;
                    buffer=avancerpointeur(&buffer, nodeBWS2->size);
                    if (isToken(buffer, &nodeValue)||isQuotedString(buffer, &nodeValue)){
                        nodeBWS2->brother=nodeValue;
                        buffer=avancerpointeur(&buffer, nodeValue->size);
                        (*node)->size=buffer-bufferTmp;
                        return(true);
                    }
                }
            }
        }
        free_arbre(*node);
    }
    return(false);
}


/*--------------TRANSFER CODING------------------------*/
bool isTransferExtension(char *buffer, Disp **node){
    int count=0;
    int ret =-1;
    char *bufferTmp2;
    char *bufferTmp=buffer;
    Disp *nodeToken;
    Disp *nodeOWS1;
    Disp *nodeParameter;
    Disp *nodeAzerty;
    Disp *nodeChar2;
    Disp *nodeOWS2;
    Disp *nodeJsp;

    if(isToken(buffer, &nodeToken)){
        *node=createNode(NULL,nodeToken, bufferTmp, nodeToken->size, transfer_extension);
        buffer=avancerpointeur(&buffer, nodeToken->size);
        bufferTmp2 = buffer;
        while (ret == -1 && *buffer!='\0' && !isCRLF(buffer, &nodeAzerty)){
            if (isOWS(buffer, &nodeOWS1)){
                bufferTmp2 = buffer;
                if (count == 0)
                {
                    nodeToken->brother = nodeOWS1;
                }
                else
                {
                    nodeParameter->brother = nodeOWS1;
                }
                count++;
                buffer = avancerpointeur(&buffer, nodeOWS1->size);
                if (*buffer == ';')
                {
                    nodeChar2 = createNode(NULL, NULL, buffer, 1, __icar);
                    nodeOWS1->brother = nodeChar2;
                    buffer = avancerpointeur(&buffer, 1);
                    if (isOWS(buffer, &nodeOWS2))
                    {
                        nodeChar2->brother = nodeOWS2;
                        buffer = avancerpointeur(&buffer, nodeOWS2->size);
                        if (isTransferParameter(buffer, &nodeParameter))
                        {
                            nodeOWS2->brother = nodeParameter;
                            buffer = avancerpointeur(&buffer, nodeParameter->size);
                        }
                        else
                        {
                            buffer = bufferTmp2;
                            free_arbre(nodeOWS1);
                            if(count == 1){
                                nodeToken->brother = NULL;
                                count = 0;
                            }
                            else
                                nodeParameter->brother = NULL; // changé
                            if(isCRLF(buffer,&nodeJsp)){
                                buffer = bufferTmp2;
                                (*node)->size = buffer - bufferTmp;
                                return(true);
                            }
                            else
                                buffer = bufferTmp2;
                            ret = 0;
                        }
                    }
                    else
                    {
                        free_arbre(nodeOWS1);
                        if(count == 1){
                            nodeToken->brother = NULL;
                            count = 0;
                        }
                        else
                            nodeParameter->brother = NULL; // changé
                        if(isCRLF(buffer,&nodeJsp)){
                            buffer = bufferTmp2;
                            (*node)->size = buffer - bufferTmp;
                            return(true);
                        }
                        else
                            buffer = bufferTmp2;
                        ret = 0;
                    }
                }
                else
                {
                    free_arbre(nodeOWS1);
                    if(count == 1){
                        nodeToken->brother = NULL;
                        count = 0;
                    }
                    else
                        nodeParameter->brother = NULL; // changé
                    if(isCRLF(buffer,&nodeJsp)){
                        buffer = bufferTmp2;
                        (*node)->size = buffer - bufferTmp;
                        return(true);
                    }
                    else
                        buffer = bufferTmp2;
                    ret = 0;
                }
            }
        }
        (*node)->size = buffer - bufferTmp;
        return (true);
    }
    return(false); // corrigé
}



/*--------------TRANSFER CODING------------------------*/
bool isTransferCoding(char *buffer, Disp **node){
    Disp *nodeExtension;

    char *chunked = "chunked";
    int lenChunked = strlen(chunked);
    char *compress = "compress";
    int lenCompress = strlen(compress);
    char *deflate = "deflate";
    int lenDeflate = strlen(deflate);
    char *gzip = "gzip";
    int lenGzip = strlen(gzip);
    if(strncmp(buffer, chunked, lenChunked) == 0){
        *node=createNode(NULL,NULL,buffer, lenChunked, transfer_coding);
        return(true);
    }
    if(strncmp(buffer, compress, lenCompress) == 0){
        *node=createNode(NULL,NULL,buffer, lenCompress, transfer_coding);
        return(true);
    }
    if(strncmp(buffer, deflate, lenDeflate) == 0){
        *node=createNode(NULL,NULL,buffer, lenDeflate, transfer_coding);
        return(true);
    }
    if(strncmp(buffer, gzip, lenGzip) == 0){
        *node=createNode(NULL,NULL,buffer, lenGzip, transfer_coding);
        return(true);
    }
    if (isTransferExtension(buffer, &nodeExtension)){
        *node=createNode(NULL,nodeExtension,buffer, nodeExtension->size, transfer_coding);
        return(true);
    }
    return(false);
}


/*-------------------TRANSFER ENCODING-------------------------------*/
bool isTransferEncoding(char *buffer, Disp **node){
    Disp *nodeVirgule;
    Disp *nodeOWS;
    Disp *nodeTransfer;
    char *bufferTmp=buffer;
    char *bufferTmp2;
    Disp *nodeOWS2;
    Disp *nodeTemp;
    Disp *nodeJsp;
    int i=0;
    int j=0;
    int val=0;
    while(*buffer == ','){
        nodeVirgule = createNode(NULL,NULL,buffer,1,__icar);
        if(i != 0){
            nodeOWS->brother = nodeVirgule;
        }
        else{
            *node = createNode(NULL,nodeVirgule,bufferTmp,1,Transfer_Encoding); // à la fin j'incrémente la taille
        }
        buffer++;
        if(isOWS(buffer,&nodeOWS)){
            nodeVirgule->brother = nodeOWS;
            buffer = avancerpointeur(&buffer,nodeOWS->size);
            i++;
        }
    }
    if(isTransferCoding(buffer,&nodeTransfer)){
        if(i == 0){
            *node = createNode(NULL,nodeTransfer,bufferTmp,1,transfer_encoding);
        }
        else{
            nodeOWS->brother = nodeTransfer;
        }
        buffer = avancerpointeur(&buffer,nodeTransfer->size);
        while((*buffer == ',' || *buffer == ' ' || *buffer == 9)){ 
            if(isOWS(buffer,&nodeOWS)){
                bufferTmp2 = buffer;
                if(j == 0){
                    nodeTransfer->brother = nodeOWS;
                }
                else{
                    if(val == 1){
                        nodeVirgule->brother = nodeOWS;
                    }
                    else if(val == 2){
                        nodeTransfer->brother = nodeOWS;
                    }
                }
                buffer = avancerpointeur(&buffer,nodeOWS->size);          
                if(*buffer == ','){
                    val  = 1;
                    nodeVirgule = createNode(NULL,NULL,buffer,1,__icar);
                    nodeOWS->brother = nodeVirgule;
                    buffer++;
                    bufferTmp2 = buffer;
                    j++;
                    if(isOWS(buffer,&nodeOWS2)){
                        nodeVirgule->brother = nodeOWS2;
                        buffer = avancerpointeur(&buffer,nodeOWS2->size);
                        if(isCRLF(buffer,&nodeTemp)){ // changé
                            buffer = bufferTmp2;
                            free_arbre(nodeOWS2);
                            nodeVirgule->brother = NULL;
                            (*node)->size = buffer - bufferTmp;
                            return(true);
                        }
                        else if(isTransferCoding(buffer,&nodeTransfer)){
                            val = 2;
                            nodeOWS2->brother = nodeTransfer;
                            buffer = avancerpointeur(&buffer,nodeTransfer->size);
                        }
                        else{
                            buffer = bufferTmp2;
                            free_arbre(nodeOWS2);
                            nodeVirgule->brother = NULL; // changé
                        }
                    }
                }
                else{ // changé
                    free_arbre(nodeOWS);
                    if(val == 2)
                        nodeTransfer->brother = NULL; // changé
                    else if(j == 0)
                        nodeTransfer->brother = NULL;
                    else if(val == 1)
                        nodeVirgule->brother = NULL;
                    if(isCRLF(buffer,&nodeJsp)){
                        buffer = bufferTmp2;
                        (*node)->size = buffer - bufferTmp;
                        return(true);
                    }
                    else
                        buffer = bufferTmp2;
                }
            }
        }
        (*node)->size = buffer - bufferTmp;
        return(true);
    }
    free_arbre(*node);
    return(false);
}


/*--------------------TRANSFER ENCODING HEADER------------------------*/
bool isTransferEncodingHeader(char *buffer, Disp **node){
    char *transferEncoding = "Transfer-Encoding";
    char *bufferTmp = buffer;
    Disp *nodeOWS;
    Disp *nodeChar;
    Disp *nodeTransfer;
    Disp *nodeString;
    int len = strlen(transferEncoding);

    if (strncmp(buffer, transferEncoding, len) == 0 && *(buffer + len) == ':') {
        buffer += len;
        nodeChar = createNode(NULL,NULL,buffer,1,__icar);
        nodeString = createNode(nodeChar,NULL,bufferTmp,len,__istring);
        *node = createNode(NULL, nodeString, bufferTmp, len, Transfer_Encoding_Header);
        buffer++;
        if(isOWS(buffer,&nodeOWS)){
            nodeChar->brother = nodeOWS;
            buffer = avancerpointeur(&buffer,nodeOWS->size);
            if(isTransferEncoding(buffer,&nodeTransfer)){
                nodeOWS->brother = nodeTransfer;
                buffer = avancerpointeur(&buffer,nodeTransfer->size);
                if(isOWS(buffer,&nodeOWS)){
                    nodeTransfer->brother = nodeOWS;
                    buffer = avancerpointeur(&buffer,nodeOWS->size);
                    (*node)->size = buffer - bufferTmp;
                    return(true);
                }
            }                        
        }
        free_arbre(*node);
    }
    return false;
}





/*--------------------HEADER FIELD--------------------------*/
bool isHeaderField(char *buffer, Disp **node)
{
    char *bufferTmp;
    bufferTmp = buffer;
    Disp *nodeTmp;
    Disp *nodeChar;
    Disp *nodeField;
    Disp *nodeOWS;
    if ((isCookieHeader(buffer, &nodeTmp)) || (isTransferEncodingHeader(buffer, &nodeTmp)) ||(isConnectionHeader(buffer, &nodeTmp)) || (isContentLengthHeader(buffer, &nodeTmp)) || (isContentTypeHeader(buffer, &nodeTmp)) || isExpectHeader(buffer, &nodeTmp) ||  (isHostHeader(buffer, &nodeTmp)) || isRefererHeader(buffer, &nodeTmp))
    {
        *node = createNode(NULL, nodeTmp, bufferTmp, nodeTmp->size, header_field);
        return (true);
    }
    else if (isFieldName(buffer, &nodeTmp))
    {
        buffer = avancerpointeur(&buffer, nodeTmp->size);
        *node = createNode(NULL, nodeTmp, bufferTmp, buffer - bufferTmp, header_field);
        if (*buffer == ':')
        {
            nodeChar = createNode(NULL, NULL, buffer, 1, __icar);
            nodeTmp->brother = nodeChar;
            buffer++;
            if (isOWS(buffer, &nodeOWS))
            {
                nodeChar->brother = nodeOWS;
                buffer = avancerpointeur(&buffer, nodeOWS->size);
                if (isFieldValue(buffer, &nodeField))
                {
                    nodeOWS->brother = nodeField;
                    buffer = avancerpointeur(&buffer, nodeField->size);
                    if (isOWS(buffer, &nodeOWS))
                    {
                        nodeField->brother = nodeOWS;
                        buffer = avancerpointeur(&buffer, nodeOWS->size);
                        (*node)->size = buffer - bufferTmp;
                        return (true);
                    }
                }
            }
        }
        free_arbre(*node);
    }
    return (false);
}

/*-----------VERIF REQUETE HTTP---------------*/
bool isHTTPmessage(char *buffer, int len, Disp **head)
{
    char *bufferTmp;
    int i = 0;
    Disp *nodeStart;
    Disp *nodeHeader;
    Disp *nodeCRLF;
    Disp *nodeCRLF2;
    Disp *nodeCRLF3;
    Disp *nodeBody;
    Disp *nodeTmp;
    Disp *nodeJSP;
    bufferTmp = buffer;
    
    if (isStartLine(buffer, &nodeStart)){
        *head = createNode(NULL, nodeStart, bufferTmp, nodeStart->size, HTTP_message);
        buffer = avancerpointeur(&buffer,nodeStart->size);
        if((buffer-bufferTmp)>len){
        return(true);
        }
        while(!isCRLF(buffer,&nodeCRLF) && *buffer != '\0'){
            if((buffer-bufferTmp)>len){
                return(true);
            }
            if(isHeaderField(buffer,&nodeHeader)){
                if(i==0){
                    nodeStart->brother = nodeHeader;
                }
                else{
                    nodeCRLF2->brother = nodeHeader;
                }
                i++;
                buffer = avancerpointeur(&buffer,nodeHeader->size);
                if(isCRLF(buffer,&nodeCRLF2)){
                    nodeHeader->brother = nodeCRLF2;
                    buffer = avancerpointeur(&buffer,nodeCRLF2->size);
                }
                else{
                    free_arbre(nodeHeader);
                    if(i == 1){
                        nodeStart->brother = NULL;
                        i = 0;
                    }
                    else{
                        nodeCRLF2->brother = NULL;
                    }
                    while(!isCRLF(buffer,&nodeTmp)) // J'ai corrigé !
                        buffer++;
                    buffer = avancerpointeur(&buffer,nodeTmp->size);
                }
            }
            else{
                while(!isCRLF(buffer,&nodeJSP) && *buffer != '\0') // changé
                    buffer++;
                if(*buffer == '\0'){
                    printf("Erreur\n");
                    return false;
                }
                else
                    buffer = avancerpointeur(&buffer,nodeJSP->size);
            }
        }
        if(isCRLF(buffer,&nodeCRLF3)){
            if(i==0){
                nodeStart->brother = nodeCRLF3;
            }
            else{
                nodeCRLF2->brother = nodeCRLF3;
            }
            buffer = avancerpointeur(&buffer,nodeCRLF3->size);
            if((buffer-bufferTmp)>len){
                return(true);
            }
            if(isMessageBody(buffer, &nodeBody)){
                nodeCRLF3->brother=nodeBody;
                buffer=avancerpointeur(&buffer, nodeBody->size);
            }
            (*head)->size = buffer - bufferTmp;
            return true;
        }
        free_arbre(*head);
    }
    return(false);
}

void free_list(Liste *liste){
    if(liste==NULL){
        return;
    }
    free_list(liste->suivant);
    free(liste);
}

/*-----------------REFERER NAME--------------------------*/

bool isRefererHeader(char *buffer, Disp **node){
    char *refererStr = "Referer";
    int len = strlen(refererStr);
    char *ptr = buffer;
    Disp *nodeOWS;
    Disp *nodeChar;
    Disp *nodeString;
    Disp *nodeReferer;
    Disp *nodeOWS2;

    if (strncmp(buffer, refererStr, len) == 0 && *(buffer + len) == ':'){
        buffer += len;
        nodeChar = createNode(NULL, NULL, buffer, 1, __icar);
        nodeString = createNode(nodeChar, NULL, ptr, len, __istring);
        *node = createNode(NULL, nodeString, ptr, len, referer_header);
        buffer++;
        if(isOWS(buffer,&nodeOWS)){
            nodeChar->brother = nodeOWS;
            buffer = avancerpointeur(&buffer,nodeOWS->size);
            if(isReferer(buffer,&nodeReferer)){
                nodeOWS->brother = nodeReferer;
                buffer = avancerpointeur(&buffer,nodeReferer->size);
                if(isOWS(buffer,&nodeOWS2)){
                    nodeReferer->brother = nodeOWS2;
                    buffer = avancerpointeur(&buffer,nodeOWS2->size);
                    (*node)->size = buffer - ptr;
                    return(true);
                }
            }
        }
        free_arbre(*node);
    }
    return(false);
}

bool isReferer(char *buffer,Disp **node){
    Disp *nodeAbsURI;
    Disp *nodeParURI;
    char *ptr;
    
    ptr = buffer;
    if(isAbsoluteURI(buffer,&nodeAbsURI)){
        *node = createNode(NULL,nodeAbsURI,ptr,nodeAbsURI->size,absolute_URI);
        return(true);
    }
    else if(isPartialURI(buffer,&nodeParURI)){
        *node = createNode(NULL,nodeAbsURI,ptr,nodeParURI->size,partial_URI);
        return(true);
    }
    return(false);
}

bool isAbsoluteURI(char *buffer, Disp **node){
    Disp *nodeChar;
    Disp *nodeScheme;
    Disp *nodeHierPart;
    char *ptr = buffer;
    Disp *nodeQuery;

    if(isScheme(buffer,&nodeScheme)){
        *node = createNode(NULL,nodeScheme,ptr,1,scheme);
        buffer = avancerpointeur(&buffer,nodeScheme->size);
        if(*buffer == ':'){
            nodeChar = createNode(NULL,NULL,buffer,1,__icar);
            nodeScheme->brother = nodeChar;
            buffer++;
            if(isHier_Part(buffer,&nodeHierPart)){
                nodeChar->brother = nodeHierPart;
                buffer = avancerpointeur(&buffer,nodeHierPart->size);
                if(isQuery(buffer,&nodeQuery)){
                    nodeHierPart->brother = nodeQuery;
                    buffer = avancerpointeur(&buffer,nodeQuery->size);
                    (*node)->size = buffer - ptr;
                    return(true);
                }
                (*node)->size = buffer - ptr;
                return(true);
            }
            
        }
        free_arbre(*node);
    }
    return(false);
}

bool isScheme(char *buffer, Disp **node){
    Disp *nodeAlpha;
    char *ptr;
    int count = 0;
    ptr = buffer;
    Disp *nodeChar;
    Disp *nodeTemp;

    if((*buffer >= 65 && *buffer <= 90) || (*buffer >=97 && *buffer <= 122)){
        nodeAlpha = createNode(NULL,NULL,buffer,1,__icar);
        *node = createNode(NULL,nodeAlpha,buffer,1,scheme);
        buffer++;
        while((*buffer >= 65 && *buffer <= 90) || (*buffer >=97 && *buffer <= 122) || isDigit(buffer) || *buffer == '+' || *buffer == '-' || *buffer == '-'){
            nodeChar = createNode(NULL,NULL,buffer,1,__icar);
            if(count == 0){
                nodeAlpha->brother = nodeChar;
            }
            else{
                nodeTemp->brother = nodeChar;
            }
            count++;
            nodeTemp = nodeChar;
            buffer++;
        }
        (*node)->size = buffer - ptr;
        return(true);
    }
    return(false);
}

bool isHier_Part(char *buffer,Disp **node){
    char *str = "//";
    int len = strlen(str);
    char *ptr = buffer;
    Disp *nodeChar;
    Disp *nodeAuthority;
    Disp *nodePath;

    if(strncmp(buffer, str, len) == 0){
        nodeChar = createNode(NULL,NULL,buffer,len,__icar);
        *node = createNode(NULL,nodeChar,buffer,1,hier_part);
        buffer += len;
        if(isAuthority(buffer,&nodeAuthority)){
            nodeChar->brother = nodeAuthority;
            buffer = avancerpointeur(&buffer,nodeAuthority->size);
            if(isPath_Abempty(buffer,&nodePath) || isPath_Absolute(buffer,&nodePath) || isPath_Rootless(buffer,&nodePath) || isPath_Empty(buffer,&nodePath)){
                nodeAuthority->brother = nodePath;
                buffer = avancerpointeur(&buffer,nodePath->size);
                (*node)->size = buffer - ptr;
                return(true);
            }
        }
        free_arbre(*node);
    }
    return(false);
}

bool isPartialURI(char *buffer, Disp **node){
    Disp *nodeRelative;
    Disp *nodeQuery;
    char *ptr = buffer;

    if(isRelativePart(buffer,&nodeRelative)){
        *node = createNode(NULL,nodeRelative,buffer,1,partial_URI);
        buffer = avancerpointeur(&buffer,nodeRelative->size);
        if(isQuery(buffer,&nodeQuery)){
            nodeRelative->brother = nodeQuery;
            buffer = avancerpointeur(&buffer,nodeQuery->size);
            (*node)->size = buffer - ptr;
            return(true);
        }
        (*node)->size = buffer - ptr;
        return(true);
    }
    return(false);
}

bool isRelativePart(char *buffer, Disp **node){
    char *str = "//";
    int len = strlen(str);
    char *ptr = buffer;
    Disp *nodeChar;
    Disp *nodeAuthority;
    Disp *nodePath;

    if(strncmp(buffer, str, len) == 0){
        nodeChar = createNode(NULL,NULL,buffer,len,__icar);
        *node = createNode(NULL,nodeChar,buffer,1,hier_part);
        buffer += len;
        if(isAuthority(buffer,&nodeAuthority)){
            nodeChar->brother = nodeAuthority;
            buffer = avancerpointeur(&buffer,nodeAuthority->size);
            if(isPath_Abempty(buffer,&nodePath) || isPath_Absolute(buffer,&nodePath) || isPath_NoScheme(buffer,&nodePath) || isPath_Empty(buffer,&nodePath)){
                nodeAuthority->brother = nodePath;
                buffer = avancerpointeur(&buffer,nodePath->size);
                (*node)->size = buffer - ptr;
                return(true);
            }
        }
        free_arbre(*node);
    }
    return(false);
}

bool isAuthority(char *buffer, Disp **node){
    Disp *nodeHost;
    Disp *nodeUser;
    Disp *nodeChar;
    Disp *nodePort;
    Disp *nodeChar2;
    char *ptr = buffer;
    char * bufferTmp;
    int count = 0;

    if(isUserInfo(buffer,&nodeUser)){
        *node = createNode(NULL,nodeUser,buffer,1,authority);
        buffer = avancerpointeur(&buffer,nodeUser->size);
        if(*buffer == '@'){
            nodeChar = createNode(NULL,NULL,buffer,1,__icar);
            nodeUser->brother = nodeChar;
            buffer++;
            count++;
        }
        free_arbre(*node);
        buffer = ptr;
    }
    if(ishost(buffer,&nodeHost)){
        if(count == 0){
            *node = createNode(NULL,nodeHost,buffer,1,host);
        }
        else{
            nodeChar->brother = nodeHost;
        }
        buffer = avancerpointeur(&buffer,nodeHost->size);
        bufferTmp = buffer;
        if(*buffer == ':'){
            nodeChar2 = createNode(NULL,NULL,buffer,1,__icar);
            nodeHost->brother = nodeChar2;
            buffer++;
            if(isPort(buffer,&nodePort)){
                nodeChar2->brother = nodePort;
                buffer = avancerpointeur(&buffer,nodePort->size);
                (*node)->size = buffer - ptr;
                return(true);
            }
            free_arbre(nodeChar2);
            buffer = bufferTmp;
            nodeHost->brother = NULL;
        }
        (*node)->size = buffer - ptr;
        return(true);
    }
    return(false);
}


bool isUserInfo(char *buffer, Disp **node){
    char *ptr = buffer;
    int count = 0;
    
    while(isUnreserved(buffer) || isPctEncoded(buffer) || isSubDelims(buffer) || *buffer == ':'){
       if(isPctEncoded(buffer)){
            buffer+=3;
        }
        else{
            buffer++;
        }
        count++;
    }
    if(count>0){
        *node=createNode(NULL,NULL, ptr, buffer-ptr, userinfo);
    }
    else{
        *node=createNode(NULL,NULL, ptr, 0, userinfo);
    }
    return(true);
}

bool isPath_Abempty(char *buffer, Disp **node){
    Disp *nodeChar;
    Disp *nodeSegment;
    char *ptr = buffer;
    int count = 0;
    char *bufferTmp;

    while(*buffer == '/'){
        nodeChar = createNode(NULL,NULL,buffer,1,__icar);
        if(count == 0){
            *node = createNode(NULL,nodeChar,buffer,1,path_abempty);
            count++;
        }
        else{
            nodeSegment->brother = nodeChar;
        }
        bufferTmp = buffer;
        buffer++;
        if(isSegment(buffer,&nodeSegment)){
            nodeChar->brother = nodeSegment;
            buffer = avancerpointeur(&buffer,nodeSegment->size);
        }
        else{
            if(count >= 1){
                free_arbre(nodeChar);
                nodeSegment->brother = NULL;
            }
            else
                free_arbre(*node);
            buffer = bufferTmp;
        }
    }
    (*node)->size = buffer - ptr;
    return(true);
}

bool isPath_Empty(char *buffer, Disp **node){
    
    if(*buffer == '\0'){
        *node = createNode(NULL,NULL,buffer,0,path_empty);
        return(true);
    }
    return(false);
}

bool isPath_Absolute(char *buffer, Disp **node){
    Disp *nodeSegmentNz;
    Disp *nodeSegment;
    Disp *nodeChar;
    Disp *nodeChar2;
    char * ptr = buffer;
    char * bufferTmp;
    int count = 0;

    if(*buffer == '/'){
        nodeChar = createNode(NULL,NULL,buffer,1,__icar);
        *node = createNode(NULL,nodeChar,buffer,1,path_absolute);
        buffer++;
        if(isSegmentNz(buffer,&nodeSegmentNz)){
            nodeChar->brother = nodeSegmentNz;
            buffer = avancerpointeur(&buffer,nodeSegmentNz->size);
            
            while(*buffer == '/'){
                nodeChar2 = createNode(NULL,NULL,buffer,1,__icar);
                if(count == 0){
                    nodeSegmentNz->brother = nodeChar2;
                    count++;
                }
                else{
                    nodeSegment->brother = nodeChar2;
                }
                nodeSegment = nodeChar2;
                bufferTmp = buffer;
                buffer++;
                if(isSegment(buffer,&nodeSegment)){
                    nodeChar->brother = nodeSegment;
                    buffer = avancerpointeur(&buffer,nodeSegment->size);
                }
                else{
                    free_arbre(nodeChar2);
                    if(count >= 1){
                        nodeSegment->brother = NULL;
                    }
                    else{
                        nodeSegmentNz->brother = NULL;
                    }
                    buffer = bufferTmp;
                }
            }
        }
        (*node)->size = buffer - ptr;
        return(true);
    }
    return(false);
}

bool isPath_Rootless(char *buffer,Disp **node){
    Disp *nodeSegmentNz;
    Disp *nodeChar;
    Disp *nodeSegment;
    char *ptr = buffer;
    char *bufferTmp;
    int count = 0;


    if(isSegmentNz(buffer,&nodeSegmentNz)){
        *node = createNode(NULL,nodeSegmentNz,buffer,1,path_rootless);
        buffer = avancerpointeur(&buffer,nodeSegmentNz->size);

        while(*buffer == '/'){
            nodeChar = createNode(NULL,NULL,buffer,1,__icar);
            if(count == 0){
                nodeSegmentNz->brother = nodeChar;
                count++;
            }
            else{
                nodeSegment->brother = nodeChar;
            }
            nodeSegment = nodeChar;
            bufferTmp = buffer;
            buffer++;
            if(isSegment(buffer,&nodeSegment)){
                nodeChar->brother = nodeSegment;
                buffer = avancerpointeur(&buffer,nodeSegment->size);
            }
            else{
                free_arbre(nodeChar);
                if(count >= 1){
                    nodeSegment->brother = NULL;
                }
                else{
                    nodeSegmentNz->brother = NULL;
                }
                buffer = bufferTmp;
            }
        }
        (*node)->size = buffer - ptr;
        return(true);
    }
    return(false);
}

bool isPath_NoScheme(char *buffer, Disp **node){
    Disp *nodeSegmentNzNc;
    Disp *nodeChar;
    Disp *nodeSegment;
    char *ptr = buffer;
    char *bufferTmp;
    int count = 0;


    if(isSegmentNzNc(buffer,&nodeSegmentNzNc)){
        *node = createNode(NULL,nodeSegmentNzNc,buffer,1,path_noscheme);
        buffer = avancerpointeur(&buffer,nodeSegmentNzNc->size);

        while(*buffer == '/'){
            nodeChar = createNode(NULL,NULL,buffer,1,__icar);
            if(count == 0){
                nodeSegmentNzNc->brother = nodeChar;
                count++;
            }
            else{
                nodeSegment->brother = nodeChar;
            }
            nodeSegment = nodeChar;
            bufferTmp = buffer;
            buffer++;
            if(isSegment(buffer,&nodeSegment)){
                nodeChar->brother = nodeSegment;
                buffer = avancerpointeur(&buffer,nodeSegment->size);
            }
            else{
                free_arbre(nodeChar);
                if(count >= 1){
                    nodeSegment->brother = NULL;
                }
                else{
                    nodeSegmentNzNc->brother = NULL;
                }
                buffer = bufferTmp;
            }
        }
        (*node)->size = buffer - ptr;
        return(true);
    }
    return(false);
}

bool isSegmentNz(char *buffer, Disp **node){

    int count = 0;
    int result = 0;
    char *buffertmp = buffer;

    while ((result= isPchar(buffer)) != 5)
    {
        count++;
        buffer += result;
    }
    if (count == 0)
    {
        return false;
    }
    *node = createNode(NULL, NULL, buffertmp, buffer - buffertmp, segment_nz);
    return true;

}

bool isSegmentNzNc(char * buffer, Disp **node){
    int count = 0;
    char *ptr = buffer;

    while(isUnreserved(buffer) || isPctEncoded(buffer) || isSubDelims(buffer) || *buffer == '@'){

        if(isPctEncoded(buffer)){
            buffer += 3;
        }
        else{
            buffer++;
        }
        count++;
    }
    if (count == 0)
    {
        return false;
    }
    *node = createNode(NULL, NULL, ptr, buffer - ptr, segment_nz_nc);
    return true;
}