#!/bin/bash

gcc -c -Werror -Wall -Wextra -pedantic -std=gnu89 *.c
ar rc liball.a *.o
ranbil liball.a

