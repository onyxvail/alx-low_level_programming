#ifndef SORTING_ALGOS_H
#define SORTING_ALGOS_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* SORTING_ALGOS_H */
