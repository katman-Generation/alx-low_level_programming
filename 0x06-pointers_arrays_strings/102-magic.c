#include <stdio.h>

/**
 * main - has a void parameter
 * @a: is not to be used i the new line code
 * @p: is not allowed to be modified
 * Return: zero always
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
