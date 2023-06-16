#include <stdio.h>
/**
 * main - prints all the alphabet in lowercase, followed by a new line.
 * except q and e
 * Return: always returns zero if code was sucess
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
