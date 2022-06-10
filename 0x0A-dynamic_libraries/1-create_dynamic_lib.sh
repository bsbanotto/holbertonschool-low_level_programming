#!/bin/bash

gcc -Wall -Werror -Wextra *.c
gcc *o -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
