#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - print
* @separator: seperat
* @n: number
* Return: return
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
char *spc, *pt;
unsigned int j;
va_list lst;
if (separator == NULL || *separator == 0)
spc = "";
else
spc = (char *) separator;
va_start(lst, n);
if (n > 0)
printf("%s", va_arg(lst, char *));
for (j = 1; j < n; j++)
{
pt = va_arg(lst, char *);
if (pt == NULL)
pt = "(nil)";
printf("%s%s", spc, pt);
}
printf("\n");
va_end(lst);
}
