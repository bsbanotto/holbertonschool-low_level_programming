#!/bin/bash

gcc -Wall -Werror -Wextra -fPIC -c *.c
gcc *.o -shared -o liball.so
