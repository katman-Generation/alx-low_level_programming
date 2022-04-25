#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or Null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}
	else
	{
		NewNode->n = n;
		NewNode->next = *head;
		*head = NewNode;

		return (NewNode);
	}
}
