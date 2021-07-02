#include <stdlib.h>
#include <stdio.h>

#include "slide_line.h"
/**
* slide_line - function
* @line: array of integers
* @size: size of array
* @direction: either slide left or slide right
* Description: Function component to reproduce 2048 game
* Return: 1 Success 0 Failure
*/
int slide_line(int *line, size_t size, int direction)
{
	int temp = line[0];
	unsigned int i;

	if (line == NULL)
		return (0);

	if (direction == SLIDE_LEFT)
	{
		for (i = 0; i < size - 1; i++)
			line[i] = line[i + 1];
	}

	if (direction == SLIDE_RIGHT)
	{
		temp = line[size - 1];
		for (i = size - 1; i > 0; i--)
			line[i] = line[i - 1];
		line[0] = temp;
	}
	return (1);
}
