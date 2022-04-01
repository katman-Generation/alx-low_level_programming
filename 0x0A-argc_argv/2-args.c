#include "main.h"
#include <stdio.h>

/**
 * main -  prints the number of arguments
 * @argc: tamaño de argv
 * @argv: program
 * Return: value 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
