#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *NEW;
	int n = 0;

	NEW = malloc(sizeof(list_t));

	if (NEW == NULL)
		return (NULL);
	while (str[n])
	{
		n++;
	}
	
	NEW->str = strdup(str);
	NEW->len = n;
	NEW->next = *head;

	*head = NEW;

	return (NEW);
}

