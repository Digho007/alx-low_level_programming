#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number to br converted
 * Return: 0 if null or the converted number if not null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int mult = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
		;

	for (len--; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
