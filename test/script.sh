#!/bin/bash

#Erreur 400 Bad Request, Content Length + Transfer Encoding
echo -e "GET / HTTP/1.1\r\nContent-Length: 156\r\nTransfer-Encoding: chunked\r\n\r\n";
echo -e "GET / HTTP/1.1\r\nContent-Length: 156\r\nTransfer-Encoding: chunked\r\n\r\n" | nc 127.0.0.1 8080;
#200 OK
echo -e "GET / HTTP/1.1\r\n\r\n"
echo -e "GET / HTTP/1.1\r\n\r\n" | nc 127.0.0.1 8080
#Erreur 400 Bad Request, Plusieurs Host
echo -e "GET / HTTP/1.1\r\nHost: www.google.com\r\nHost: www.youtube.com\r\n\r\n";
echo -e "GET / HTTP/1.1\r\nHost: www.google.com\r\nHost: www.youtube.com\r\n\r\n" | nc 127.0.0.1 8080;
#Erreur 400, Pas de Host avec version 1.1
echo -e "GET / HTTP/1.1\r\n\r\n";
echo -e "GET / HTTP/1.1\r\n\r\n" | nc 127.0.0.1 8080;
#200 Ok
echo -e "GET / HTTP/1.1\r\nHost: www.google.com\r\n\r\n";
echo -e "GET / HTTP/1.1\r\nHost: www.google.com\r\n\r\n" | nc 127.0.0.1 8080;
