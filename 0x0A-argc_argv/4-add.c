#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -  adds positive numbers
 * @argc: The arguments' counter
 * @argv: The argument's values
 * Return: value 0
 */
int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < 48 || argv[x][y] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
