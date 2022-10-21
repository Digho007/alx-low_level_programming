#include "main.h"

/**
 * print_square - prints a square on the terminal
 * @size: is the size of the square
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		j = 1;
		while (j <= size)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			} j++;
			_putchar('\n');
		}
	}
}
