#include <stdio.h>
#include <unistd.h>

/**
 * main - prints "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed by a new line, to the SE.
 * Return: Always 0 if code was a sucess
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
