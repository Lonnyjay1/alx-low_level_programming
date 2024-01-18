#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
    int largest;

    if (a >= b && a >= c) {
        largest = a;  // If 'a' is greater than or equal to 'b' and 'c', 'a' is the largest
    } else if (b >= a && b >= c) {
        largest = b;  // If 'b' is greater than or equal to 'a' and 'c', 'b' is the largest
    } else {
        largest = c;  // Otherwise, 'c' is the largest
    }

    return largest;
}

