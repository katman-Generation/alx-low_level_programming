#include "lists.h"

/**
 * add_dnodeint - function
 * @head: double pointer to first node
 * @n: new node data to add
 *
 * Description: function to add new node to beginning of dbl lnkd list
 * Return: Address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NewNode;
	int x = n;

	NewNode = malloc(sizeof(dlistint_t));

	if (NewNode == NULL)
		return (NULL);

	NewNode->n = x;
	NewNode->next = *head;
	NewNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = NewNode;
	*head = NewNode;
	return (NewNode);
}
