#include "main.h"

/**
 * more_numbers - prints 10 times the number from 0-14
 */

void more_numbers(void)
{
	int i, n;

	n = 0;
	while (n <= 9)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
	 n++;
	_putchar('\n');
	}
}
