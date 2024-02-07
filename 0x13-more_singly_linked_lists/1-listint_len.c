#include "lists.h"

/**
 * listint_len - this returns number of elements in alinked list
 * @h: head pointer to the linked list type listint_t to traverse 
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h);
{

	size_t num_count;

	if (h == NULL)
		return (0);

	for (num_count = 0; h !=NULL; h = h->next, num_count++)
		;

	return (num_count);
}
