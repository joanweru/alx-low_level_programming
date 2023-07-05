#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input integer to calculate square root of
 * Return: square root of input number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - findssquare root
 * @past: previous value
 * @rt: value of square root
 * Return: square root
 */
int _sqrt(int past, int rt)
{
	if (past > rt)
		return (-1);
	else if (past * past == rt)
		return (past);
	return (_sqrt(past + 1, rt));
}
