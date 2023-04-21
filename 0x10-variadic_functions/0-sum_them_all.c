#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum
 * @n: number
 * @...: var
 * Return: return
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int j;
int sums;
va_list ap;
va_start(ap, n);
if (n == 0)
return (0);
i = sums = 0;
for (j = 0; j < n; j++)
sums += va_arg(ap, unsigned int);
va_end(ap);
return (sums);
}
