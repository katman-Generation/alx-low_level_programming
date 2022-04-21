#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @*h: it is the pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int p = 0;
	const list_t *pon = h;

	while (pon != NULL)
	{
		if (pon->str == NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		p++
		pon = pon->next;
	}
	return (p);
}
