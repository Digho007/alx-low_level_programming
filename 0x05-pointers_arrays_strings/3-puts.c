#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: input; *str: pointer to the input
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
