#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: the number
 * @y: the power
 * Return: -1 if y is slower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
