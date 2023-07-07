#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: counts number of arguments
 * @argv: an array of strings whose elements are the arguments
 * of the program
 * Return: 0 if code was success, and 1
 * if the number of arguments passed to your program is not exactly 1
 */
int main(int argc, char *argv[])
{
	int n, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	while (n > 0)
	{
		coins++;
		if ((n - 25) >= 0)
		{
			n -= 25;
			continue;
		}
		if ((n - 10) >= 0)
		{
			n -= 10;
			continue;
		}
		if ((n - 5) >= 0)
		{
			n -= 5;
			continue;
		}
		if ((n - 2) >= 0)
		{
			n -= 2;
			continue;
		}
		n--;
	}

	printf("%d\n", coins);

	return (0);
}

