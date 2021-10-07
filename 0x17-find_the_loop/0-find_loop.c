#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* find_listint_loop - function
* @head: pointer node to head of the linked list to check
* Description: finds where a loop intersects within a linked list
* Return: &node of loop intersect or NULL if no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node_fast, *node_slow;

	if (head == NULL)
		return (NULL);

	node_fast = node_slow = head;

	while (node_fast->next && node_fast->next->next)
	{
		node_slow = node_slow->next;
		node_fast = node_fast->next->next;
		if (node_slow == node_fast)
		{
			node_slow = head;
			while (node_slow != node_fast)
			{
				node_slow = node_slow->next;
				node_fast = node_fast->next;
			}
			return (node_fast);
		}
	}
	return (NULL);
}
