#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * err - shortcut for errors in main
 */

void err(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * check_digit - checks if input variable is digit
 * @a: array to be checked
 * Return: 1 if array is composed of digits, 0 otherwise
 */
int check_digit(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] < '0' || a[i] > '9')
			return (0);

		i++;
	}

	return (1);
}

/**
 * arr_len: returns length of input array
 * @a: array to evaluate
 * Return: length of array
 */
int arr_len(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * main - multiplies two positive numbers.
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0 if code was success
 */
int main(int argc, char *argv[])
{
	char *c1, *c2;
	int l1, l2, l, z, rem, i, j, *prod, a = 0;

	c1 = argv[1], c2 = argv[2];
	if (argc != 3 || !check_digit(c1) || !check_digit(c2))
		err();

	l1 = arr_len(c1);
	l2 = arr_len(c2);
	l = l1 + l2 + 1;
	prod = malloc(sizeof(int) * l);

	if (!prod)
		return (1);

	for (i = 0; i <= l1 + l2; i++)
		prod[i] = 0;

	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		i = c1[l1] - '0';
		rem = 0;
		for (l2 = arr_len(c2) - 1; l2 >= 0; l2--)
		{
			j = c2[l2] - '0';
			rem += prod[l1 + l2 + 1] + (i * j);
			prod[l1 + l2 + 1] = rem % 10;
			rem /= 10;
		}

		if (rem > 0)
			prod[l1 + l2 + 1] += rem;

	}

	for (z = 0; z < l - 1; z++)
	{
		if (prod[z])
			a = 1;

		if (a)
			_putchar(prod[z] + '0');
	}

	if (!a)
		_putchar('0');

	_putchar('\n');
	free(prod);
	return (0);

}
