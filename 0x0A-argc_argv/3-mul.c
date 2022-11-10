#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers passed to main
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 means successful
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
