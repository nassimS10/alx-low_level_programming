#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *_realloc - realloc a memory
 * @ptr: pointer to alloc by malloc
 * @old_size: size of the ptr
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr01;
	char *old_pt;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr01 = malloc(new_size);
	if (!ptr01)
		return (NULL);

	old_pt = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			ptr01[a] = old_pt[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			ptr01[a] = old_pt[a];
	}

	free(ptr);
	return (ptr01);
}
