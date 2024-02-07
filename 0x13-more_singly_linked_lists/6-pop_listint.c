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
	int num;

	if (*head == NULL)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
