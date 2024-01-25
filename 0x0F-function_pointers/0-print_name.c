#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - this prints a name
 * @name: name of print
 * @f: pointer to the printed function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name ||
		return;
	f(name);
}
