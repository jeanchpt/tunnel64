//********************************************************//
// Déclaration des fonctions de la bibliothèque extremite //
//********************************************************//

#ifndef EXTREMITE_H
#define EXTREMITE_H

// Includes
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>

/**
 * Fonction qui permet de rediriger le flux de tun0 vers la socket
*/
void extin();

/**
 * Fonction qui permet de rediriger le flux de la socket vers tun0
*/
void extout();

#endif