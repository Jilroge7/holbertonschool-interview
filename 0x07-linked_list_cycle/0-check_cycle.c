#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* check_cycle - function
* @list: list to check for a cycle
*
* Description:
* Return: 1 for True 0 for False
*/
int check_cycle(listint_t *list)
{
	listint_t *slow_node = list;
	listint_t *fast_node = list;

	if (list == NULL)
		return (0);

	if (list->next == NULL)
		return (1);

	while (slow_node && fast_node && fast_node->next)
	{
		slow_node = slow_node->next;
		fast_node = fast_node->next->next;
		if (slow_node == fast_node)
		return (1);
		if (slow_node == NULL || fast_node == NULL)
		return (0);
	}
	return (0);

}
