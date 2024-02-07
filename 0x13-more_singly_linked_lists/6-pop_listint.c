#include "lists.h"

/**
 * delete_pop_listint - this deletes the head node in a linked list
 * @head: pointer to the first element 
 *
 * Return: value of n, if empty return 0
 */
int pop_listint(listint_t **head);
{
	int new;
	listint_t *temp = *head;

	if (head == NULL)
		return (0);

	head = temp = *head;
	if (*head)
	{

	new = temp->next;
	*head = new->next;
	free(temp);
	}
	else
		new = 0
		
	return (new);
}
