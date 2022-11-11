#include "main.h"

/**
 * *_strncpy - function copies strings
 * @dest: destination string
 * @src: source string
 * @n: numbers to be copied
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[j] = src[j];
	while (j < n)
		dest[j++] = '\0';
	return (dest);
}

