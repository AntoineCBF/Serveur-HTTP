#!/bin/bash

#Test de la fonction decode + remove dots:
echo -e "GET /../toto/index%2Ehtml HTTP/1.0\r\nHost: charlyk16.fr\r\n\r\n";
echo -e "GET /../toto/index%2Ehtml HTTP/1.0\r\nHost: charlyk16.fr\r\n\r\n" | nc 127.0.0.1 8080;
#Test 2:

echo -e "GET /../././././toto/../index%2Ehtml HTTP/1.0\r\nHost: charlyk16.fr\r\n\r\n";
echo -e "GET /../././././toto/../index%2Ehtml HTTP/1.0\r\nHost: charlyk16.fr\r\n\r\n" | nc 127.0.0.1 8080;

#Test 3:
echo -e "GET %2F%2E%2E%2Ftoto/azerty/index.html HTTP/1.0\r\nHost: charlyk16.fr\r\n\r\n";
echo -e "GET %2F%2E%2E%2Ftoto/azerty/index.html HTTP/1.0\r\nHost: charlyk16.fr\r\n\r\n" | nc 127.0.0.1 8080;
