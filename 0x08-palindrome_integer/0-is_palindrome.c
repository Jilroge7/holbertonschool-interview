#include "palindrome.h"
#include <stdio.h>
#include <stdlib.h>
/**
* is_palindrome - function
* @n: integer to chk - unsigned long int: 0 to 18446744073709551615
* Description: check if number is a palindrome
* Return: 0 if not a palindrome, 1 if is a palindrome
*/

int is_palindrome(unsigned long n)
{
	int reverse = 0;
	int preserved_n, remainder;

	preserved_n = n;

	while (n != 0)
	{
		remainder = n % 10;
		reverse = (reverse * 10) + remainder;
		n /= 10;
	}

	if (preserved_n == reverse)
		return (1);
	else
		return (0);

}
