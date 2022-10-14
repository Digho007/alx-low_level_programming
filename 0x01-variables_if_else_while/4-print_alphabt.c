#include <stdio.h>

/**
 * main - prints alphabets in lowercase and exclude q and e
 * Return: 0 Always represent success
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
