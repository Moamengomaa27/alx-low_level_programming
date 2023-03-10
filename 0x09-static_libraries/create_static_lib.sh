#!/bin/bash
gcc -Wall -pandantic -Wextra 0c *.c
ar -rc  liball.a *.o
ranlib liball.a
