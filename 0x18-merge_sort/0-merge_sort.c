#include "sort.h"

/**
* merge_sort - sorts array of ints using merge sort algo
* @array: array to sort
* @size: size of array to sort
*
* Return: merge progress, sorted array
*/
void merge_sort(int *array, size_t size)
{
    /*int left_sublist, right_sublist, merged_array;*/
    int start, end, mid;

    if (size < 2 || array == NULL)
        return;

    start = array[0];
    end = array[size -1];

    if (start < end)
    {
        mid = (start + end) / 2;
    }
    printf("Merging...\n");
    /*printf("[left]: %d\n", left_sublist);*/
    /*printf("[right]: %d\n", right_sublist);*/
    printf(", \n");
    printf("[Done]: %d\n", mid);
}