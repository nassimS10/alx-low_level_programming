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
if (index >= (sizeof(*n) * 8))
return (-1);
unl = 1;
*n = *n | (unl << index);
return (1);
}
