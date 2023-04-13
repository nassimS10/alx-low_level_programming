#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory by malloc.
 * @b: integer
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
int *ma = malloc(b);
if (ma == 0)
exit(98);
return (ma);
}
