#include <stdio.h>

/**
 * main - prints the numbers 1-100
 * replaces multiples of 3 with Fizz
 * replaces multiples of 5 with Buzz
 * replaces multiples of 3 and 5 with FizzBuzz
 */

void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%d", i);
		else if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");
}
