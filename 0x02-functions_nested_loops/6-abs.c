#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @r: input
 * Return: 0 means successful
 */

int _abs(int r)
{
	if (r < 0)
		r *= -1;
	_putchar(r);
	return (0);
}
