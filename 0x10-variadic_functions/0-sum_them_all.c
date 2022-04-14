#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 *
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list num;
	int sum;

	va_start(num, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(num, int);

	va_end(num);
	return (sum);
}
