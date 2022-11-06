#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: original string
 * @accept: the prefix
 * Return: number of bytes of accept found in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c;

	i = c = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (c);
}
