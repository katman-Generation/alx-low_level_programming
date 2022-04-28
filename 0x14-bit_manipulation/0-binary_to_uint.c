#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int var = 1, current = 0, count = 0;

	if (b == NULL)
		return (0);

	while (b[count])
		count++;

	while (count)
	{
		if (b[count - 1] != '0' && b[count -1] != '1')
			return (0);

		if (b[count - 1] == '1')
			current += var;
		var *= 2;
		count --;
	}
	return (current);

}
