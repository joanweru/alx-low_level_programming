#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a
 * string to uppercase
 * @s: string to be modiied
 *
 * Return: pointer to the resulting string
 */
char *string_toupper(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] = s[index] - 32;
	}

	return (s);
}
