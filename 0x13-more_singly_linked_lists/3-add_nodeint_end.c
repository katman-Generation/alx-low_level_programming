#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the head of the list
 * @n: data to insert in the new element 
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode;
	listint_t *temp = *head;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);

	else
	{
		NewNode-> = n;
		NewNode->next = NULL;

		if (*head == NULL)
		{
			*head = NewNode;
			return (NewNode);
		}
		while (temp->next)
			temp = temp->next;

		temp->next = NewNode;

		return (NewNode);
	}
}
