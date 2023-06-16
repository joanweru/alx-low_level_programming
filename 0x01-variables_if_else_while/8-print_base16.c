#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: always zero if code was a sucess
 */
int main(void)
{
	int hxdcmls;
	char lwrcs;

	for (hxdcmls = '0'; hxdcmls <= '9'; hxdcmls++)
		putchar(hxdcmls);
	for (lwrcs = 'a'; lwrcs <= 'f'; lwrcs++)
		putchar(lwrcs);
	putchar('\n');

	return (0);
}
