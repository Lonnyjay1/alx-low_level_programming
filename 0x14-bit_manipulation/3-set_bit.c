#include "main.h"

/**
 * set_bit - this sets the value of a bit to 1 at a given index
 * @n: decimal number passed 
 * @index: the index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)

{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n | add;
	return (1);
}
