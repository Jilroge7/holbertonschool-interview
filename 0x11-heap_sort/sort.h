#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
void print_array(const int *array, size_t size);
void heap_sort(int *array, size_t size);
int max(int *array, size_t size);
void sift_down(int *array, size_t size);
#endif /* SORT_H */
