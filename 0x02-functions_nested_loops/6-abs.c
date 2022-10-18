#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @int: input
 * Return: 0 signifies success
 */

int _abs(int r)
{
	if (r < 0)
		r *= -1;
	printf("%d\n", r);
	return (0);
}
