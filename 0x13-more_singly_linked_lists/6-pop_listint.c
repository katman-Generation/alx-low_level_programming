#include "lists.h"

/**
 * pop_listint - function that deletes head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: A pointer to listint_t structure.
 * Return: The head node's datafrom deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *NewNod;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	NewNode = (*head)->next;
	free(*head);
	*head = NewNode;

	return (n);
}
