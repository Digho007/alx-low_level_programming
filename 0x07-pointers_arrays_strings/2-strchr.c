#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: memory location
 * @c: character
 * Return: the first occurence of the character or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
