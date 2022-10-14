#include <stdio.h>

/**
 * main - prints numbers from 0 to 9 using putchar
 * Return: 0 Always successful
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
