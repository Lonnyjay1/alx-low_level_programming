#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - this sums two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this subtracts  two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this multiply two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_mod - remainder of the division of a and b
 * @a: first integer
 * @b: second integer
 *
 *  Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

