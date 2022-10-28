#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13
 * @str: string input
 * Return: string
 */

char *rot13(char *str)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha[i] != '\0'; i++)
		{
			if (str[i] == alpha[i])
				str[i] = code[i];
		}
	}
	return (str);
}
