#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits - flip_bits func
 * @n: param n long int n in func
 * @m: param m l int in func
 *
 * Return: return
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j, keep = 0;
unsigned long int nnow, xr = n ^ m;
for (j = 63; j >= 0; j--)
{
nnow = xr >> j;
if (nnow & 1)
keep++;
}
return (keep);
}
