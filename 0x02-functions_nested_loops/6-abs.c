#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @r: input
 * Return: absolute value of the input
 */

int _abs(int r)
{
	if (r < 0)
		r *= -1;
	printf("%d\n", r);
	return (r);
}
