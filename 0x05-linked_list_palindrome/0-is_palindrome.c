#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* is_palindrome - function
* @head: beginning of linked list to check
* Description: check is singly linked list is a palindrome
* Return: 0 if not a palindrome, 1 if is a palindrome
*/

int is_palindrome(listint_t **head)
{
	listint_t *end = (*head);
	int count = 0;
	int start = 0;
	int data_list[10000];

	/* if list does not exist */
	if (head == NULL)
		return (0);

	/* if list exists but is empty */
	if (*head == NULL)
		return (1);

	/* move end node to the end of list and get length of list */
	while (end != NULL)
	{
		data_list[count] = end->n;
		count++;
		end = end->next;
	}

	while (start <= count - 1) /* count - 1 is end of list */
	{
		if (data_list[start] == data_list[count - 1])
		{
			start++;
			count--;
		}
		else
		{
			return (0);
		}

	}
	return (1);
}
