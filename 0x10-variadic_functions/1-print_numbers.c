#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print num
 * @separator: separate
 * @n: num
 * @...: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int j;
va_list val;
va_start(val, n);
for (j = 0; j < n; j++)
{
printf("%d", va_arg(val, int));
if (separator != NULL)
{
if (j < n - 1)
{
printf("%s", separator);
}
}
}
printf("\n");
va_end(val);
}
