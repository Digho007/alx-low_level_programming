#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 means success
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '1'; j <= '10'; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if ((i != '9') && (j != '10'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n')
	return (0);
}
