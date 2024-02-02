#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct list_link - singly linked list
 * @str: string (malloc string)
 * len: length of string
 * @next: pointer to next node
 */

typedef struct list_link
{
	char *str;
	size_t len;
	struct list_link *next;
}list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar (char c);

#endif

