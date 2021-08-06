#include <stdio.h>
#include <stdlib.h>
#include "search.h"

/**
* linear_skip - function
* @list: list to search
* @value: value to find
* Description: search for a value in a sorted skip list for a value.
* Return: ptr to 1st node where value is
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = NULL;
	skiplist_t *next = NULL;


	if (list == NULL)
		return (NULL);
	current = list;
	next = list;

	return (list);
}
