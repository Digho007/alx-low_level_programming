#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: original string
 * @accept: the prefix
 * Return: number of bytes of accept found in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}
