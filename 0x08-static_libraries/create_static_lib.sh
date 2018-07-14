#!/bin/bash
gcc -c  -Wall -Werror -Wextra -pedantic temp/*.c
ar rc liball.a *.o
