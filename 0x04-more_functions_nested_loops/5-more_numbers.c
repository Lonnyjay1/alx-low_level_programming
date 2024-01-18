#include "main.h"
/**
 * more_numbers(void) - function prints 10 times the numbers
 * Return: void
 */

void more_numbers(void)
{
	int num_1;
	int num_2;

	for (num_1 = 0; num_1 < 10; num_1 ++)
	{
		for (num_2 = 0; num_2 < 14; num_2 ++)
		{

			if (num_2 > 9)
			{
				_putchar((num_2 / 10) + '0');
			}
				_putchar((numb_2 % 10) + '0');
			}


