#include "main.h"
#include <stdio.h>

/**
 * print_binary - print_binary fanc
 * @n: param n as int in func
 *
 * Return: return
 */
void print_binary(unsigned long int n)
{
int nn, j;
unsigned long int q;
nn = 0;
for (j = 63; j >= 0; j--)
{
q = (n >> j) & 1;
if (q)
nn = 1;
if (nn)
_putchar(((n >> j) & 1) + '0');
}
if (!n)
_putchar('0');
}
