#include "main.h"

/**
 * main - prints alphabets in lowercase
 * Return: 0 always signify success
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);

	}
	_putchar('\n');
	return (0);
}
