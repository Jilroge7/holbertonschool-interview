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
	int start = 0;
	int end = size - 1;

	if (size < 2 || array == NULL)
		return;

	top_sort(array, start, end, size);
}

/**
* top_sort - sorts the array before merging
* @array: array to sort
* @start: starting index (0)
* @end: ending index
* @size: size of array
* Return: nothin
*/
void top_sort(int *array, int start, int end, size_t size)
{
	int mid;

	if (start < end)
	{
		mid = (start + end) / 2;
		top_sort(array, start, mid, size);
		top_sort(array, mid + 1, end, size);
		merger(array, start, mid, end, size);
	}
}

/**
* merger - function
* @array: array to merger
* @start: starting index (0)
* @mid: middle index of array
* @end: ending index
* @size: size of array
* Description: does the merging of the now sorted sub-arrays
* Returns: nothin
*/
void merger(int *array, int start, int mid, int end, size_t size)
{
	int *temp_arr;
	int i, j, k;

	k = 0;
	i = start;
	j = mid + 1;
	temp_arr = malloc(sizeof(int) * size);

	printf("Merging...\n[left]: ");
	print_array(array, start);
	printf("[right]: ");
	print_array((array + start), end);
	while (i <= mid && j <= end)
	{
		if (array[i] < array[j])
			temp_arr[k++] = array[i++];
		else
			temp_arr[k++] = array[j++];
	}

	while (i <= mid)
		temp_arr[k++] = array[i++];


	while (j <= end)
		temp_arr[k++] = array[j++];

	for (i = end; i >= start; i--)
		array[i] = temp_arr[--k];

	free(temp_arr);

	printf("[Done]: ");
	print_array(array, size);
}
