#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_LENGTH 5000



typedef enum{
    HTTP_message,
    start_line,
    request_line,
    method,
    token,
    __sp,
    request_target,
    origin_form,
    absolute_path,
    __icar,
    segment,
    query,
    HTTP_name,
    HTTP_version,
    __crlf,
    header_field,
    field_name,
    field_value,
    OWS,
    field_vchar,
    field_content,
    __htab,
    obs_fold,
    message_body,
    __octet,
    Connection_header,
    __istring,
    connection_option,
    Connection,
    cookie_string,
    cookie_pair,
    cookie_name,
    cookie_value,
    cookie_octet,
    Content_Length_header,
    Content_Type,
    type,
    media_type,
    parameter,
    Content_Length,
    quoted_pair,
    quoted_string,
    sub_type,
    qd_text,
    expect,
    expect_header,
    cookie_header,
    Content_Type_header,
    IPv4address,
    host,
    __digit,
    Host_header,
    Transfer_Encoding_Header,
    Transfer_Encoding,
    transfer_encoding,
    transfer_coding,
    transfer_extension,
    transfer_parameter,
    BWS,
    dec_octet,
    reg_name,
    IP_literal,
    IPvFuture,
    __hexdig,
    IPv6address,
    h16,
    ls32,
    uri_host,
    Host,
    port,
    referer_header,
    absolute_URI,
    partial_URI,
    scheme,
    hier_part,
    authority,
    userinfo,
    path_abempty,
    path_absolute,
    path_rootless,
    path_noscheme,
    segment_nz,
    segment_nz_nc,
    path_empty
}MESSAGE;

typedef struct display{
    struct display *son;
    struct display *brother;
    char *text;
    int size;
    MESSAGE label;
}Disp;

typedef struct liste{
    Disp *node;
    struct liste *suivant;
}Liste;

char *toString(MESSAGE m);
char *get_ligne(FILE *ptr_file);
char *avancerpointeur(char **ptr,int number);
Disp *createNode(Disp* brother, Disp *son, char *text, int size, MESSAGE label);
void free_arbre(Disp *arbre);
void afficherArbre(Disp *tree,int nb);
bool isHTTPmessage(char *buffer, int len, Disp **head);
bool isStartLine(char *buffer, Disp**node);
bool isRequestLine(char *buffer, Disp** node);
bool isMethod(char *buffer, Disp **node);
bool isToken(char *buffer, Disp **node);
bool isSpace(char *buffer,  Disp **node);
bool isRequestTarget(char *buffer, Disp **node);
bool isOriginForm(char *buffer, Disp **node);
bool isQuery(char *buffer, Disp**node);
bool isAbsolutePath(char *buffer, Disp **node);
bool isSegment(char *buffer, Disp **node);
int isPchar(char *buffer);
bool isUnreserved(char *buffer);
bool isPctEncoded(char *buffer);
bool isSubDelims(char *buffer);
bool isDigit(char *buffer);
bool isHTTPversion(char *buffer, Disp **node);
bool isHTTPname(char *buffer, Disp **node);
bool isCRLF(char *buffer, Disp **node);
bool isConnection(char *buffer, Disp **node);
bool isConnectionOption(char *buffer, Disp **node);
bool isConnectionHeader(char *buffer, Disp **node);
bool isCookieName(char *buffer,Disp **node);
bool isCookieOctet(char *buffer,Disp **node);
bool isCookieValue(char *buffer, Disp **node);
bool isCookiePair(char *buffer,Disp **node);
bool isCookieString(char *buffer,Disp **node);
bool isCookieHeader(char *buffer, Disp **node);
bool isContentLength(char *buffer, Disp **node);
bool isContentLengthHeader(char *buffer, Disp **node);
bool isContentType(char *buffer, Disp **node);
bool isSubType(char *buffer, Disp **node);
bool isType(char *buffer, Disp **node);
bool isQdtext(char* buffer, Disp **node);
bool isQuotedPair(char* buffer, Disp **node);
bool isQuotedString(char *buffer, Disp **node);
bool isParameter(char *buffer, Disp **node);
bool isMediaType(char *buffer, Disp **node);
bool isContentTypeHeader(char *buffer, Disp **node);
bool isExpect(char *buffer, Disp **node);
bool isExpectHeader(char *buffer, Disp **node);
bool isHeaderField(char *buffer, Disp **node);
bool isFieldValue(char *buffer, Disp **node);
bool isFieldContent(char *buffer, Disp **node);
bool isHtab(char *buffer,  Disp **node);
bool isObsFold(char *buffer, Disp **node);
bool isFieldVchar(char *buffer, Disp **node);
bool isVchar(char *buffer);
bool isObsText(char *buffer);
bool isFieldName(char *buffer, Disp **node);
bool isOWS(char *buffer, Disp ** node);
bool isMessageBody(char *buffer, Disp **node);
bool isHostHeader(char *buffer, Disp **node);
char *toString2(MESSAGE m);
bool isHostHeader(char *buffer, Disp **node);
bool isHost(char *buffer, Disp **node);
bool isIPv4address(char *buffer, Disp **node);
bool isDecOctet(char *buffer, Disp **node);
bool isTransferEncodingHeader(char *buffer, Disp **node);
bool isTransferEncoding(char *buffer, Disp **node);
bool isTransferCoding(char *buffer, Disp **node);
bool isTransferExtension(char *buffer, Disp **node);
bool isTransferParameter(char *buffer, Disp **node);
bool isBWS(char *buffer, Disp **node);
void searchArbre(char *buffer,Disp *head,Liste **tete);
bool isLs32(char *buffer, Disp **node);
bool isH16(char *buffer, Disp **node);
bool isIPv6address(char *buffer, Disp **node);
bool isIPvFuture(char *buffer, Disp **node);
bool isIPLiteral(char *buffer, Disp **node);
bool isHexdigit(char *buffer, Disp **node);
bool ishost(char *buffer, Disp **node);
bool isUriHost(char *buffer, Disp **node);
bool isPort(char *buffer, Disp **node);
void afficherListe(Liste *tete);
void free_list(Liste *liste);
bool isRefererHeader(char *buffer, Disp **node);
bool isReferer(char *buffer,Disp **node);
bool isAbsoluteURI(char *buffer, Disp **node);
bool isScheme(char *buffer, Disp **node);
bool isHier_Part(char *buffer,Disp **node);
bool isPartialURI(char *buffer, Disp **node);
bool isRelativePart(char *buffer, Disp **node);
bool isAuthority(char *buffer, Disp **node);
bool isUserInfo(char *buffer, Disp **node);
bool isPath_Abempty(char *buffer, Disp **node);
bool isPath_Empty(char *buffer, Disp **node);
bool isPath_Absolute(char *buffer, Disp **node);
bool isPath_Rootless(char *buffer,Disp **node);
bool isPath_NoScheme(char *buffer, Disp **node);
bool isSegmentNz(char *buffer, Disp **node);
bool isSegmentNzNc(char * buffer, Disp **node);