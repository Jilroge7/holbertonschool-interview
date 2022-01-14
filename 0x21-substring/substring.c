#include <stdlib.h>
#include <stdio.h>
#include "substring.h"

/**
* find_substring -  function
* @s: string to scan
* @words: array of words must include in concatenation arrangement
* @nb_words: number of elements in array words
* @n: address to store elemts in returned array
* Description: finds all possible stubstrings containing a list ofwords
* Return: Null if not solution or allocated array
*/
int *find_substring(char const *s, char const **words, int nb_words, int *n)
{
	if (!s || !*words || nb_words == 0 || !n)
		return (NULL);
	return (NULL);
}
