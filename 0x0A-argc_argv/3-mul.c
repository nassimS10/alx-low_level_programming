#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print the num
 * @argc: arguement c
 * @argv: arr arguement strings
 * Return: 0
 **/
int main(int argc, char const *argv[])
{
int sum;

if (argc == 3)
{
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
}
else
{
printf("error\n");
return (1);
}
return (0);
}
