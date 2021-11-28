#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"


/**
* wildcmp - function to compare 2 strngs for a match
* @s1: string 1 to compare
* @s2: string 2 to compare to string 1
* Return: 1 if true, otherwise 0
*/
int wildcmp(char *s1, char *s2)
{
/* compare if they are both empty strings == true */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

/* compare if the first char in the string matches, then */
/*  recursively call the function with a +1 to move through */
/*  the chars in memory */
	else if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));

/*  if the s2 char you are currently on is a wild card, */
/*  recursively call the function and either the following */
/*  char in memory for string2 or the following char in */
/*  memory for string1, whichever has another char first in */
/*  memory to compare */
	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	else
		return (0);
}
