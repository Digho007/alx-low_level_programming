#include <stdio.h>

void first_before(void) __attribute__((constructor));

/**
 * first_before - prints a sentence before the main function is executed
 */

void first_before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
