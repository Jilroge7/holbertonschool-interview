#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* advanced_binary - searches for value in sorted array of ints
* @array: pointer to first element
* @size: number of elements in array
* @value: value to search for
*
* Return: Index where Value is located or -1 on fail
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t index;
	int mid;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Searching in array: %d", array[index]);
		mid = array[0] + (array[size] - array[0]) / 2;
		if (value == array[mid])
			return (mid);

		else if (value < array[mid])
			return (advanced_binary(array, mid - 1, value));

		else
			return (advanced_binary(array, mid + 1, value));
	}
	return (-1);

}
