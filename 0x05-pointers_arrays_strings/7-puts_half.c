#include "main.h"

/**
 * puts_half - prints half of a string but if the string is odd,
 * print (length_of_the_string - 1) / 2
 * @str: input
 */

void puts_half(char *str)
{
	int i, j, k, len;

	for (i = 0; str[i] != '\0'; i++)
	{
		len = i - 1;
		if (len % 2 == 0)
		{
			for (j = (len / 2) + 1; j <= len; j++)
				_putchar(str[j]);
		}
		if (len % 2 == 1)
		{
			for (k = ((len - 1) / 2) + 1; k <= len; k++)
				_putchar(str[k]);
		}
	}
}
