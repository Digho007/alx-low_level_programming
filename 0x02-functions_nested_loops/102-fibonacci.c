#include <stdio.h>

/**
 * main - print the first 50 fibonnaci numbers starting from 1 and 2
 * Return: 0 means successful
 */

int main(void)
{
	int n, res;
	int a = 1;
	int b = 2;

	printf("%d, ", a);
	printf("%d, ", b);

	for (n = 0; n <= 48; n++)
	{
		res = a + b;
		printf("%d, ", res);
	}
	printf("\n");
	return (0);
}
