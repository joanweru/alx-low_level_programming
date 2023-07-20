#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters to be passed to function
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap_list;
	int sum_result = 0;
	unsigned int j;

	va_start(ap_list, n);

	if (n == 0)
		return (0);

	j = 0;

	for (j = 0; j < n; j++)
		sum_result += va_arg(ap_list, int);

	va_end(ap_list);

	return (sum_result);
}
