#include "main.h"
#include <stdio.h>
/**
 * get_bit - this gives the value of a bit at a given index
 * @n: bit value to evaluate
 * @index: the index starting from 0, of the bit we want to get
 * Return: the value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
