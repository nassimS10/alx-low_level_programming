#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - func to sum
 * @n: num
 * Return: return
 */
int sum_them_all(const unsigned int n, ...)
{
va_list val;
unsigned int j, total;
total = 0;
va_start(val, n);
for (j = 0; j < n; j++)
{
total += va_arg(val, int);
}
va_end(val);
return (val);
}
