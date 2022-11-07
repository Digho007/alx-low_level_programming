#include "main.h"

/**
 * strstr - function that locates a string
 * @needle: substring
 * @haystack: string
 * Return: pointer to the beginning of the elocated substring
 * or NULL if substring does not exist.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (neddle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
