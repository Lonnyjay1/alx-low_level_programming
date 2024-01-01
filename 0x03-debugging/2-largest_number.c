#include "main.h"
#include <stdio.h>

/**
 * main - prints the largest of 3 integers
 * Return: 0 (success)
 */

int main(void)
{
	int a, b, c;
	int largest;

	int largest = a;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
