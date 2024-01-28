#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that perform simple calculator function
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: results of calc functions executed
 */
int main(int argc char *argv[])
{
	char *op; /* operator */
	int arg1, arg2, /* number inputs */

	if (argc !=4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	0 = *argv[2];
	if ((0 == '/' || 0 == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
