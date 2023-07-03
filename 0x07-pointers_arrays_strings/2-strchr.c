#include "main.h"
#include "stdio.h"
/**
 * _strchr - Returns a pointer to the first occurrence of the character
 * in the string s, or NULL if the character is not found
 * @s: string to serch from
 * @c: character to locate
 * Return:  pointer to the first occurrence of the character
 * c in the string s  or NULL if the character cannot be located
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
