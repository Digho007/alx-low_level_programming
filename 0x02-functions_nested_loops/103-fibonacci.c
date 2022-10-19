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

	while (n == 0)
	{
		res = a + b;
		a = b;
		b = res;
		if ((res <= 4000000) && (res % 2 == 0))
		{
			sum += res;
		} else
			break;
	} n == 1;
	printf("%ld\n", sum);
	return (0);
}
