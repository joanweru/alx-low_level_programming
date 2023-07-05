#include "main.h"
int divisible(int n, int i);

/**
 * is_prime_number - checks if number is prime
 * @n: input integer to evaluate
 * Return: 1 if n is prime or  0 in otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (divisible(n, i));
}

/**
 * divisible - checks if input number is divisible
 * @num: input number to be checked
 * @i: divisor
 * Return: 1 if num is divisible or 0 if numis not divisible
 */

int divisible(int num, int i)
{
	if (num % i == 0)
		return (0);

	if (i == num / 2)
		return (1);

	return (divisible(num, i + 1));
}





