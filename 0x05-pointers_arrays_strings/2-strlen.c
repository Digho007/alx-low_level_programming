#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input; *s: pointer to a string
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count += i;
	return (count);
}
