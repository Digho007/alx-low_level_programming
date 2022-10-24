#include "main.h"

/**
 * puts_half - prints half of a string but if the string is odd,
 * print (length_of_the_string - 1) / 2
 * @str: input
 */

void puts_half(char *str)
{
	int i, j, len;

	for (i = 0; str[i] != '\0'; i++)
		len = i - 1;
	if (len % 2 == 0)
	{
		j = len / 2;
	}
	else
	{
		j = (len - 1) / 2;
	}
	while (j < len)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
