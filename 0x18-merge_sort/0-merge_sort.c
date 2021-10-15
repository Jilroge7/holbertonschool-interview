#include "sort.h"

/**
* merge_sort - sorts array of ints using top sort function
* @array: array to sort
* @size: size of array to sort
*
* Return: merge progress, sorted array
*/
void merge_sort(int *array, size_t size)
{
	int *temp_arr;

	if (size < 2 || array == NULL)
		return;

	temp_arr = malloc(sizeof(int) * size);
	if (temp_arr == NULL)
		return;

	top_sort(array, size, temp_arr);
	free(temp_arr);
}
/**
* top_sort - sorts the array before merging
* @array: array to sort
* @size: size of array to sort
* @temp_arr: temp array
*/
void top_sort(int *array, size_t size, int *temp_arr)
{
	int mid = size / 2;

	if (size <= 1)
		return;
	top_sort(array, mid, temp_arr);
	top_sort(&array[mid], size - mid, temp_arr);
	merger(array, temp_arr, mid, size);
}
/**
* merger - function
* @array: array to merger
* @temp_arr: temp array
* @mid: middle index of array
* @size: size of array
* Description: does the merging of the now sorted sub-arrays
* Returns: nothin
*/
void merger(int *array, int *temp_arr, int mid, size_t size)
{
	int left_idx = 0;
	int index = 0;
	int right_idx = mid;

	printf("Merging...\n[left]: ");
	print_array(array, mid);
	printf("[right]: ");
	print_array((&array[mid]), size - mid);
	while (left_idx < mid && right_idx < (int)size)
	{
		if (array[left_idx] <= array[right_idx])
		{
			temp_arr[index] = array[left_idx];
			left_idx++;
		}
		else
		{
			temp_arr[index] = array[right_idx];
			right_idx++;
		}
		index++;
	}
	while (left_idx < mid)
	{
		temp_arr[index] = array[left_idx];
		left_idx++;
		index++;
	}
	while (right_idx < (int)size)
	{
		temp_arr[index] = array[right_idx];
		right_idx++;
		index++;
	}
	for (index = 0; index < (int)size; index++)
		array[index] = temp_arr[index];

	printf("[Done]: ");
	print_array(array, size);
}
