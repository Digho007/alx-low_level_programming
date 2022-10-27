#include "main.h"

/**
 * *cap_string - capitalizes each words in a string
 * @str: the string
 * Return: character
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	for (i = 1; str[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (str[i-1] == sep[j] && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
	}
	return (str);
}
