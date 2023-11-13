#!/usr/bin/bash
gcc -c -Wall -Wextra -Werror -fPIC -pedantic -std=gnu89 *.c
gcc -shared *.o -o liball.so
