#include "main.h"

/**
 * reverse_array - reverses the content of an aarray of integers
 * @a: the array pointer
 * @n: the number of the elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	temp = 0;
	n = n - 1;

	for (i = 0; i <= n; n--, i++)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
	}

}
