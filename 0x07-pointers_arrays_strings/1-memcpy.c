#include "main.h"

/**
 * _memcpy - function that copies bytes from source to destination
 * @n: number of bytes to be copied
 * @src: source
 * @dest: destination
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
		dest[i] = src[i];

	return (dest);
}
