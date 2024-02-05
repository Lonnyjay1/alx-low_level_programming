#include "lists.h"

/**
 * listint_len - this returns number of elements in alinked list
 * @h: head pointer to traverse the list
 *
 * Return: the number of nodes
 */
typedef struct listint_s {
	int n;
	struct listint_s *next;
}listint_t;

size_t listint_len(const listint_t *h);
{

	const listint_t *first = h;
	size_t num_count = 0;

	while (first)
	{
		num_count++;
		first = first->next;

	}

	return (num_count);
}
