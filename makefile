all: librequest.so server

server: librequest.so main.o parser/parserhttp.o source/semantics.o
	gcc -o server main.o parser/parserhttp.o source/semantics.o librequest.so -L. -lrequest
main.o: main.c api/request.h
	gcc -Wall -o main.o -c main.c
source/semantics.o: source/semantics.c source/semantics.h
	gcc -Wall -o source/semantics.o -c source/semantics.c
parser/parserhttp.o: parser/parserhttp.c parser/parserhttp.h
	gcc -Wall -o parser/parserhttp.o -c parser/parserhttp.c
