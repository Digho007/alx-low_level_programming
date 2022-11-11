#include "main.h"

/**
 * _isdigit - check if number is between 0 andd 9
 * @x: the number checked
 * Return: 1 if letter is uppercase and 0 if not
 */

int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
