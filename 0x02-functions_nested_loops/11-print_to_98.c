#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: input
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	n++;
	while (n > 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	n--;
}
