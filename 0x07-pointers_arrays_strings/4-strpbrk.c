#include "main.h"

/**
 * _strpbrk - function to search a string for any set of bytes
 * @s: the string
 * @accept: this is used for the search
 * Return: pointer to the byte in s that matches accept
 * or NULL if byte not found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
