#!/bin/bash
gcc -Wall -Wextra -Werror -Pedantic -c -FPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$lD_LIBRARY_PATH
