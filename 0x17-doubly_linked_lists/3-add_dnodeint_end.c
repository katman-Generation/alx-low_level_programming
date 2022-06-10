#include "lists.h"

/**
 * add_dnodeint_end - function
 * @head: double pointer to first node of list
 * @n: new node's data
 *
 * Description: function to add new node at end of dbl lnkd list
 * Return: address of new element, or NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NewNode;
	dlistint_t *LastNode;
	int x = n;

	NewNode = malloc(sizeof(dlistint_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->n = x;
	NewNode-next = NULL;

	if (*head == NULL)
	{
		NewNode->prev = NULL;
		*head = NewNode;
		return (NewNode);
	}
	LastNode = *head;
	while (LastNode->next != NULL)
		LastNode = LastNode->next;
	LastNode->next = NewNode;
	NewNode->prev = LastNode;

	return (NewNode);
}
