#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int c = 1;

	if (*s == '\0')
		return (0);

	c = _strlen_recursion(s + 1);

	return (c);
}
