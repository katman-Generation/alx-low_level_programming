#include "lists.h"
#include <stdio.h>
#include <stdlib.h>i

/**
 * print_list - prints all the elements of a list_t list.
 * @*h: it is the pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int p = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		p++;
	}
	return (p);
}
