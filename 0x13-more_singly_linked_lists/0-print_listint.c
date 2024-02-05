#include "lists.h"


/**
 * print_listint - function that  prints all the elements of a linked list
 * @h: head pointer to the linked list of type listint_t to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{	const listint_t *first = h;
	size_t num_count  = 0;

	while (first)
	{
		printf("%d\n", first->n);
		num_count++
			first = first->next;
	}

	return (num_count);
}
