#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: First integer; *a: pointer to integer a
 * @b: Second integer; *b: pointer to integer b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
