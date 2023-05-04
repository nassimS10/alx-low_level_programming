#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - binary fanc
 *
 * @b: char str b param
 *
 * Return: return
 */
unsigned int binary_to_uint(const char *b)
{
int j;
unsigned int mival = 0;
if (b == NULL)
return (0);
for (j = 0; b[j]; j++)
{
if (b[j] < '0' || b[j] > '1')
return (0);
mival = 2 * mival + (b[j] - '0');
}
return (mival);
}
