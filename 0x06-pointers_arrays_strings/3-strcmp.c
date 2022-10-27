#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: 0 always successful
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (i == j)
		_putchar('0');
	else if (i < j)
	{
		_putchar('-');
		_putchar('1');
	} else
		_putchar('1');

	return (0);
}
