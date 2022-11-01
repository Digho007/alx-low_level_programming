#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @s: pointer to the memory location
 * @b: what needs to fill the memory location
 * @n: the number of bytes to be filled
 * Return: the memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
		s[i] = b;

	return (s);
}
