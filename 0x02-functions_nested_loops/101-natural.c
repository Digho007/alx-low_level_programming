#include <stdio.h>

/**
 * main - compute and print the sum of all multiples of 3 and 5 below 1024
 * Return: 0 signifies successful
 */

int main(void)
{
	int n, res;

	for (n = 3; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			res += n;
		}
	}
	printf("%d\n", res);
	return (0);
}
