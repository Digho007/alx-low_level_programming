#include <stdio.h>

/**
 * main - print the first 50 fibonnaci numbers starting from 1 and 2
 * Return: 0 means successful
 */

int main(void)
{
	long int n, res;
	long int a = 1;
	long int b = 2;

	printf("%ld, ", a);
	printf("%ld, ", b);

	for (n = 0; n < 48; n++)
	{
		res = a + b;
		printf("%ld, ", res);
		b = res;
		a = b;
	}
	printf("\n");
	return (0);
}
