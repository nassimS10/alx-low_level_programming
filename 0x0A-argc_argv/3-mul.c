#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print the num
 * @argc: arguement c
 * @argv: arr arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int i, m;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = 1;

		for (i = 1; i < 3; i++)
			m *= atoi(argv[i]);

		printf("%d\n", m);
	}

	return (0);
}
