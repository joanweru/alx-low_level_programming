#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: returns zero if code was a success
 */
int main(void)
{
	char lttrz;

	for (lttrz = 'z'; lttrz >= 'a'; lttrz--)
		putchar(lttrz);

	putchar('\n');

	return (0);
}


