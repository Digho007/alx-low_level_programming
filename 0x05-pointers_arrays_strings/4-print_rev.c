#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string input
 */

void print_rev(char *s)
{
	int i, j, len;

	i = 0;
	while (s[i] != '\0')
		i++;
	len = i - 1;
	for (j = len; j <= 0; j--)
		_putchar(s[j]);
	_putchar('\n');

}
