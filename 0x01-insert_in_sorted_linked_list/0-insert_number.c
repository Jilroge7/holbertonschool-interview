#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* insert_node - function
* @head: list to insert into
* @number: number to insert
* Return: address of new node or NULL if failed
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current = (*head);
	listint_t *newnode = NULL;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = number;
	newnode->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = newnode;
		return (newnode);
	}

	if ((*head)->n > number)
	{
		newnode->next = (*head);
		(*head) = newnode;
		return (newnode);
	}

	while (current->next != NULL && number > current->next->n)
		current = current->next;

	newnode->next = current->next;
	current->next = newnode;
	return (newnode);
}
