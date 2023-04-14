#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* array_range - make an array of int by  min to max.
* @min: min of array
* @max: max of  array
* Return: pointer
**/
int *array_range(int min, int max)
{
int *pt;
int a, rang;
if (min > max)
return (NULL);
rang = (max - min) + 1;
pt = malloc(rang *sizeof(*pt));
if (pt == NULL)
return (NULL);
for (a = 0; a < rang && min <= max; a++, min++)
*(pt + a) = min;
return (pt);
}
