#include "main.h"
#include <stdio.h>
/**
 * clear_bit - this clear the value of a bit to 1 at a given index
 * @n: pointer to number input
 * @index: index position to begin from 0 of bit to set
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n & (~add);
	return (1);
}
