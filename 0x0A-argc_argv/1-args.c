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
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
