#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses string
 *
 * @str: string to be reversed
 *
 * Return: void
 */
void rev_string(char *str)
{
	char tmp;
	char *p_start, *p_end;

	p_start = str;
	p_end = p_start + strlen(str) - 1;

	for (; p_start < p_end; p_start++, p_end--)
	{
		tmp = *p_end;
		*p_end = *p_start;
		*p_start = tmp;
	}
}
