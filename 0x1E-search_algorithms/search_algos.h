#ifndef __SEARCH_ALGO__
#define __SEARCH_ALGO__


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>


/* Protopypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif
