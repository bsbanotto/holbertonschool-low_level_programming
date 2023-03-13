#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h>

/* Structures */

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/* Prototypes */

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);

void print_array(int *array, int start, int end);

int binary_search_recursive(int *array, int start, int end, int value);

int advanced_binary(int *array, size_t size, int value);

skiplist_t *linear_skip(skiplist_t *list, int value);

void free_skiplist(skiplist_t *list);

void init_express(skiplist_t *list, size_t size);

skiplist_t *create_skiplist(int *array, size_t size);

void print_skiplist(const skiplist_t *list);

#endif
