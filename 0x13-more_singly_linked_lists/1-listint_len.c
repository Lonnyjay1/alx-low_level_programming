#include "lists.h"

/**
 * listint_len - this returns number of elements in alinked list
 * @h: head pointer to the linked list type listint_t to traverse 
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h);
{

	size_t num_count = 0;

	while (next)
	{
		num_count++;
		next = next->next;

	}

	return (num_count);
}
