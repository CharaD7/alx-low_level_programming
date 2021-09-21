#!/bin/bash
shopt -s extglob
gcc -c *.c !(main).c && ar rc libmy.a *.o 
