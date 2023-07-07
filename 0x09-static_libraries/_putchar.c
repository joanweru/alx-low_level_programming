#include <unistd.h>

/**
 * _putchar - write input character c to stdout
 * @c: input character to be printed
 * Return: 1 is success, 1 otherwise. errno is
 * set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
