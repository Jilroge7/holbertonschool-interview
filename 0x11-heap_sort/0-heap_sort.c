#include <stdlib.h>
#include <stdio.h>
#include "sort.h"


/**
* heap_sort - Sorts an array of integers with sift-down
*
* @array: The array to be printed
* @size: Number of elements in @array
* Return: Nothing
*/
void heap_sort(int *array, size_t size)
{
	int num_items = size;
	int i;

	for (i = 0; i < num_items; i++)
		max(array, size);
}

/**
* max - gets max number of array
*
* @array: The array to be printed
* @size: Number of elements in @array
* Return: Nothing
*/
int max(int *array, size_t size)
{
	int num_items = size;
	int i;
	int max = array[0];

	for (i = 1; i < num_items; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}


/**
* sift_down - Sorts an array of integers
*
* @array: The array to sift
* @size: size of the array
* Return: Nothing
*/
void sift_down(int *array, size_t size)
{
	int num_items = size;
	int i;

	for (i = 0; i < num_items; i++)
		print_array(array, size);
}
