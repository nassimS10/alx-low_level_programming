#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - get input and size
 * @s1: one to conct
 * @s2: two to conct
 * Return: s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, mi;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = mi = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		mi++;
	conct = malloc(sizeof(char) * (i + mi + 1));

	if (conct == NULL)
		return (NULL);
	i = mi = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[mi] != '\0')
	{
		conct[i] = s2[mi];
		i++, mi++;
	}
	conct[i] = '\0';
	return (conct);
}
