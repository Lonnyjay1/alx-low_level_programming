#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  * print_list - prints all elements of a list_t list
  * @h: head of singly link list to print
  * Return: number of nodes in list
  */
size_t print_list(const list_t *h)
{
	size_t i;

	if (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
