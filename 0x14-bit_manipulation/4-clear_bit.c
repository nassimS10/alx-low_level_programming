#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - clear_bit func
 *
 * @n: n param l int in func
 * @index: index param un int in fanc
 *
 * Return: return
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int unl;
if (index >= (sizeof(*n) * 8))
return (-1);
unl = 1;
unl = unl << index;
unl = ~unl;
*n = *n & unl;
return (1);
}
