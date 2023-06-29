#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: string to be encoded.
 *
 * Return: pointer to the resulting string
 */
char *rot13(char *str)
{
	int i, j;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (str[i] == x[j])
			{
				str[i] = y[j];
				break;
			}

		}

	}

	return (str);
}
