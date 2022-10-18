#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to ne checked
 * Return: 1 if c is lowercase or uppercase and 0 if otherwise
 */

int _isalpha(int c)
{
	if (c <= 'a' || c <= 'A' && c <= 'z' || c <= 'Z')
		return (1);
	else
		return (0);
}
