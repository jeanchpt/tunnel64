#!/bin/sh

# Ajout d'une adresse IP à l'interface tun0
ip address add fc00:1234:ffff::1/64 dev tun0