#!/bin/bash

gcc -Wall -Werror -Wextra *.c
gcc *o -shared -o liball.so
