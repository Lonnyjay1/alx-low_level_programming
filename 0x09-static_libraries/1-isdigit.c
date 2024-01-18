#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c:function pararmeter to be checked
 * Return:1 if true
 */

int _isdigit(int c)
{

if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
