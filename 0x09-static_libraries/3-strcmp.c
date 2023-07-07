#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: pointer to irst string to be compared
 * @s2: pointer to second string to be compared
 *
 * Return: <0 if s1 is less than s2, 0 if they're equal,
 * >0 f s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
