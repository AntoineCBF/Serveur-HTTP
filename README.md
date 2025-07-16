# Serveur-HTTP
Ce repo contient un projet scolaire d'un serveur HTTP développé en C

## Overview
Ce serveur est capable de recevoir des requêtes HTTP et de répondre à ces requêtes (envoyer les ressources demandées) si la requête est correcte et si le serveur possède la ressource.

Pour ce projet, nous avons travailler sur 3 points en particulier:

 + Le parsing des requêtes
 + Le respect du protocol HTTP
 + La réponse au client

## Le parsing

Le parsing etait la première étape, et la plus importante de ce projet. Le principe est de vérifier que la requête reçue est bien formée, et respecte les règle de la grammaire ABNF. Pour cela, ce programme créé un arbre, chaque noeud correspond à un champ de la grammaire. Vous pourrez retrouver l'ensemble du code dans la section [correspondant au parseur](parser/parserhttp.c)

## La sémantique

La sémantique est la seconde partie du projet. Nous devions donc vérifier que les requêtes reçues respectent les règles des RFC correspondant au protocole HTTP. C'est un étape importante qui nous permet de savoir si le serveur doit (ou non) renvoyer la ressource demandée. Cela permet de connaitre le contenu nécessaire pour forger la réponse au client. Vous pourrez retrouver l'ensemble du code dans la section [correspondant à la sémantique ](source/semantics.c)

## La réponse

La dernière section correspond à la formation et l'envoie de la réponse au client. Vous pourrez retrouver l'ensemble du code dans la section [correspondant à la réponse](source/reponse.c)
