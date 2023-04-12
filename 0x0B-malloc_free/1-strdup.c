#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entr
 *@str: string to dpl
 * Return: return  string or NULL
 */

char *_strdup(char *str)
{
	char *strn = NULL;
	unsigned int j;
	int a;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
	strn = (char *)malloc(n + 1 * sizeof(char));
	if (strn != NULL)
	{
		for (j = 0; str[j] != '\0'; j++)
			strn[j] = str[j];
	} else
	{
		return (NULL);
	}
	strn[j] = '\0';
	return (strn);
}
