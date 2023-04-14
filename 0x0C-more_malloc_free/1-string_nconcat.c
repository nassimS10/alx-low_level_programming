#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concat two str
 * @s1: s1 string
 * @s2: s2 sring
 * @n: num bytes of s2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int le1, le2, a, b;

	le1 = le2 = b = a = 0;

	while (s1 && s1[le1])
		le1++;

	while (s2 && s2[le2])
		le2++;

	if (n >= le2)
		str = malloc(sizeof(char) * (le1 + le2 + 1));
	else
		str = malloc(sizeof(char) * (le1 + n + 1));

	if (str == NULL)
		return (NULL);

	for (a = 0; a < le1; a++)
	{
		str[a] = s1[a];
	}

	while (n < le2 && a < (le1 + n))
		str[a++] = s2[b++];
	while (n >= le2 && a < (le1 + le2))
		str[a++] = s2[b++];

	str[a] = '\0';

	return (str);
}
