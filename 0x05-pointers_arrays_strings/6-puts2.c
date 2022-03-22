#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints str to standard output in reverse + new line
 *
 * @str: string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int str_size;


	str_size = strlen(str);

	for (i = 0; i < str_size; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
