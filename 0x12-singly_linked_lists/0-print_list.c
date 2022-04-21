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
	size_t p = 0;

	if (h->str == NULL)
		printf("[%d] %s\n", h->len, h->str);
	else
		while (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		p++;
		}
	return (p);
}
