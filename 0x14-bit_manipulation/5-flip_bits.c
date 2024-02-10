#include "main.h"
#include <stdio.h>

/**
 * flip_bits - this flip bits to get to one number from another number
 * @n: first number
 * @m: second number 
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int flip = 0, count, count1;

	while (!(n == 0 && m == 0))
	{
		count = n & 1;
		count1 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (count != count1)
			flip += 1;
	}
	return (flip);
}
