#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print
 * @format: format
 */
void print_all(const char * const format, ...)
{
va_list val;
const char *p = format;
char c, *str;
int i;
float f;
va_start(val, format);
while (p && *p)
{
switch (*p)
{
case 'c':
c = va_arg(val, int);
printf("%c", c);
break;
case 'i':
i = va_arg(val, int);
printf("%d", i);
break;
case 'f':
f = va_arg(val, double);
printf("%f", f);
break;
case 's':
str = va_arg(val, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
break;
default:
p++;
continue;
}
p++;
if (p && *p)
printf(", ");
}
printf("\n");
va_end(val);
}

