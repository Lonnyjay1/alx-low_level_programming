#include "lists.h"

/**
 * free_listint -this  frees a linked list
 * @head:  list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	*temp = head;

	while (head)
	{
		current = head->next;
		free(head);
		head = temp;
	}
}
