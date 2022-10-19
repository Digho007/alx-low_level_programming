#include <stdio.h>

/**
 * main - sum of even fibonacci whose value does not exceed 4,000,000
 * Return: 0 means successful
 */

int main(void)
{
	long int a, b, n, res, sum;

	a = 0;
	b = 1;
	sum = 0;

	for (n = 0; n < 50; n++)
	{
		res = a + b;
		a = b;
		b = res;
		if (res % 2 == 0 && res < 4000000)
		{
			sum += res;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
