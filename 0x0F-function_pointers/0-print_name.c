#include "function_pointers.h"

/**
 * print_name - this prints a name
 * @name: char string
 * @f: pointer to the print function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name ||
		return;
	f(name);
}
