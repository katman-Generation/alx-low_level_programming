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

	NewNode = malloc(sizeof(listint_t));

	if (!NewNode || !head)
		return (NULL);

	NewNode->n = n;
	NewNode->next = NULL;

	if (idx == 0)
	{
		NewNode->next = *head;
		*head = NewNod;
		return (NewNode);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			NewNode->next = temp->next;
			temp->next = NewNode;
			return (NewNode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
