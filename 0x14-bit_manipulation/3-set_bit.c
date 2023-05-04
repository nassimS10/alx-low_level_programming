#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - set bit func
 *
 * @n: param n l int in func
 * @index: param un int index in func
 *
 * Return: return
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int unl;

if (index > 64)
return (-1);

for (unl = 1; index > 0; index--, unl *= 2)		;
*n = *n +  unl;
return (1);
}
