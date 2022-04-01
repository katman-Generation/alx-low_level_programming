#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers.
 * @argc: tamaño de argv
 * @argv: program
 * Return: value 0
 */
int main(int argc, char *argv[])
{
	int multple;

	if (argc == 3)
	{
		multple = atoi(argv[1])* atoi(argv[2]);
		printf("%d\n", multple);
	}
	else {
		printf("Error\n");
		return (1);
	}
	return (0);
}
