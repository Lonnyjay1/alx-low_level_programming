#include "lists.h"

/**
  * pop_listint - this deletes the head of the list and returns its contents
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		n = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		n = 0;
	return (n);
}
