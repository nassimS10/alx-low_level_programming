#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - get bit func
 *
 * @n: in l int param n
 * @index: index param in the func
 *
 * Return: return
 */
int get_bit(unsigned long int n, unsigned int index)
{
int opval;
if (index > 63)
return (-1);
opval = (n >> index) & 1;
return (opval);
}
