#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: given number
 * Return: -1 if nis lower than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (1);
	else
		return (n * factorial(n - 1));
}
