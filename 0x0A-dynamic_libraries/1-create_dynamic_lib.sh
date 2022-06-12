#!/bin/bash

gcc -Wall -Werror -Wextra -fPIC *.c
gcc *o -shared -o liball.so
