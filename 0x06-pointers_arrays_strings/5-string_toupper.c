#include "main.h"

/**
 * *string_toupper - changes all lowercase of a string to uppercase
 * @str: all characters
 * Return: character
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		str[i];
	}
	return (str);
}
