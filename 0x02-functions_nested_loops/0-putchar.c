#include <stdio.h>

/**
 * main - A program that prints _putchar followed by a new line
 * Return: returns 0
 */
int main(void)
{
	char *str = "_putchar\n";

	while (*str)
	{
		putchar(*str++);
	}
	return (0);
}
