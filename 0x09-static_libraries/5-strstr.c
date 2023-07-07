#include "main.h"
#include <stdio.h>
/**
  * _strstr - function finds the first occurrence of the substring
  * needle in the string haystack. The terminating null bytes
  * (\0) are not compared
  * @needle: substring to search
  * @haystack: string to be searched
  * Return: pointer to the beginning of the located substring
  * or NULL if the substring is not found.
  */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[a]);
	}
	return (NULL);
}
