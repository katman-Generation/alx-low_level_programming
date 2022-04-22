#include "lists.h"
#include <stdio.h>
#include <stdlib.h>i

/**
 * print_list - prints all the elements of a list_t list.
 * @h: it is the pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *pon = h;

	int p;

	if (pon == NULL)
		printf(" [0] (nil)\n");

	while (pon != NULL)
	{
		printf(" [%d] $s \n", h->len, h->str);
		pon = pon->next;
		p++;
	}
	return (p);
}
