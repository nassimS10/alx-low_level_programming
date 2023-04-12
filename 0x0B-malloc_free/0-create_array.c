#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *create_array - creat arr
* @size: size arr
* @c: char
* Return: return arr
*/

char *create_array(unsigned int size, char c)
{
char *a = malloc(size);
if (size == 0 || a == 0)
return (0);
while (size--)
a[size] = c;
return (a);
}
