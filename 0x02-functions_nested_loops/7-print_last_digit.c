#include "main.h"

/**
 * print_last_digit - prints the last digit of any number
 * @n: value of the digit
 * Return: the value of the digit
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
