#include <unistd.h>

/**
 * _putchar - this writes the character c to stdout
 * @c: character to print
 *
 * Return: On success 1.
 * On error, return -1, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
