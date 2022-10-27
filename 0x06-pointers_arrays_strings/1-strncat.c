#include "main.h"

/**
 * *_strncat - function concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
