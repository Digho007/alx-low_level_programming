#include <stdio.h>

/**
 * main - prints all possible combination of single-digit numbers.
 * Return: 0 means successful
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
