#include <stdio.h>

/**
 * main - print the first 50 fibonnaci numbers starting from 1 and 2
 * Return: 0 means successful
 */

int main(void)
{
	long int n, res, a, b;

	a = 0;
	b = 1;

	for (n = 0; n < 50; n++)
	{
		res = a + b;
		a = b;
		b = res;
		printf("%ld", res);
		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
