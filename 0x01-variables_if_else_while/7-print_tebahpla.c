#include <stdio.h>
/**
 * main - Entry point Prints the alphabet lowercase using ascii backwards
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char re;
for (re = 'z'; re >= 'a'; re--)
{
putchar(re);
}
putchar('\n');
return (0);
}
