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

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (str[i] == sep[j] && str[i] >= 'a' && str[i] <= 'z')
				str[j] -= 32;
	}
	return (str);
}
