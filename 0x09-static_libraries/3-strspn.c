#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 * @s: input string to be evaluated
 * @accept: string with chracters to locate into s
 * Return:  number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0, indicate;
	char *begin = accept;

	while (*s)
	{
		indicate = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				n++;
				indicate = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = begin;
		if (indicate == 0)
			break;
	}
	return (n);
}
