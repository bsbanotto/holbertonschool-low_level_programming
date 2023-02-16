#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <unistd.h>

/* Prototypes */

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);

void print_array(int *array, int start, int end);

int binary_search_recursive(int *array, int start, int end, int value);

#endif
