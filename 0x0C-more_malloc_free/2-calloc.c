#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_memset - memory with byte
 * @s: memory to get fill
 * @b: char to cp
 * @n: n to cp b
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}

/**
 * *_calloc - alloc memory of an  array
 * @nmemb: num of elem of an array
 * @size: sizeof elemn
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
