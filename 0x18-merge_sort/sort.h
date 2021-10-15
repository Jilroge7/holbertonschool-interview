#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
void print_array(const int *array, size_t size);
void merge_sort(int *array, size_t size);
void top_sort(int *array, int start, int end, size_t size);
void merger(int *array, int start, int mid, int end, size_t size);
#endif /* SORT_H */
