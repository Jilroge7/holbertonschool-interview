#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
int _strlen(char *s);
int _isdigit(int num);
int _atoi(char *s);
/**
* main - program multiplies two positive numbers
* @argc: argument count
* @argv: argument values passed
* Return: the product of numbers multiplied
*/
int main(int argc, char **argv)
{
	int i, j;
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < _strlen(argv[1]); i++)
	{
		if (!_isdigit(argv[1][i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (j = 0; j < _strlen(argv[2]); j++)
	{
		if (!_isdigit(argv[2][j]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
/**
* _isdigit - function to check for valid int
* @num: number to check
* Return: 0 for true, 1 for false
*/
int _isdigit(int num)
{
	if (num >= 48 && num <= 57)
		return (1);
	else
		return (0);
	return (num);
}
/**
* _strlen - function
* @s: first operand & pointer
*
* Description: function that returns the length of a string
* Return: Always 0
*/
int _strlen(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
}
/**
* _atoi - function
* @s: pointer to string to convert
*
* Description: function that converts chars to integers
* Return: Always 0
*/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int index = 0;

	if (s[index] == '\0')
		return (0);

	if (s[0] == '-')
	{
		sign = -1;
		index++;
	}
	for (; s[index] != '\0'; ++index)
	{
		if (!(s[index] >= '0' && s[index] <= '9'))
			return (0);
		result = result * 10 + s[index] - '0';

	}
	return (sign * result);
}
