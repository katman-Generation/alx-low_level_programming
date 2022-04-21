#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - defining linked list
 * @str: string - the string in the node
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif