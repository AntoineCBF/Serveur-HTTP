#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include"../parser/parserhttp.h"


void remove_dot_segments(char* input_buffer, char* output_buffer);
int semantic_Content_Length_TE(Disp *head);
int semantic_Host(Disp *head);
void getPATH(Disp *head, char **path);
void getHost(Disp *head, char **host);
int verifPATH(char *path);
char *concatenate(char *first, char *second);
int semantic_Method(Disp *head);
int semantic(Disp *head, char *path);
int semantic_Version(Disp *head);
void backMessage(int semantic,Disp *head);