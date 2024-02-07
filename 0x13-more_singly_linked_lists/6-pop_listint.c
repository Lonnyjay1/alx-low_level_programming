#include "list.h"

/**
 * pop_listint - this delete the head node of a listint_t
 * @h: head
 *
 * Return: data inside head or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;


	if (*head == NULL)
		return (0);


	int data = temp->n;
	*head = (*head)->next;
	free(temp);


	return (data);
}
