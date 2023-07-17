#include <stdio.h>
/**
 * main - rints the name of the file it was
 * compiled from, followed by a new line
 * Return: zero, if successful
 */
int main(void)
{
	printf("%s\n",  __FILE__);

	return (0);
}
