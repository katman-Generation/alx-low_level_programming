#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - prints the struck dog
 * @d: pointer to the struct
 *
 * Return: nothing
 */
void print_dog(struck dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->Owner);
}
