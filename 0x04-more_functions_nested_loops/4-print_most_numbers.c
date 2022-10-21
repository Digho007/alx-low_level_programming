#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	int n;

	for (i = '0'; i <= '9'; i++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
