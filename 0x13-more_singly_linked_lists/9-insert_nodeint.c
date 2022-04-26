#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *NewNode;
	listint_t *temp = *head;

	if (head ==NULL)
		return (NULL);

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = NewNode;
		NewNode->next = NULL;
		NewNode->n = n;

		return (NewNode);
	}
	if (idx == 0)
	{
		NewNode-> = *head;
		NewNode->n = n;
		*head = NewNode;

		return (NewNode);
	}
	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}

	NewNode->n = n;
	NewNode->next = temp->next;
	temp->next = NewNode;

	return (NewNode);
}
