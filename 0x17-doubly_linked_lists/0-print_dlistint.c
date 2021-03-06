#include "lists.h"

/*
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the list
 *
 * Description: Function to print all the  elements in dlistint_t list
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
