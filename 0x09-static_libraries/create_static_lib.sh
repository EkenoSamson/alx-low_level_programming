#!/bin/bash
gcc -c -Werror -Wall -Wextra -pedantic -std=gnu89 *.c
ar rc liball.a *.o
ranlib liball.a

