#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_endianness - get_endianness func
 *
 * Return: return
 */
int get_endianness(void)
{
unsigned int j = 1;
char *s = (char *) &j;
return (*s);
}
