#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: input string
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap_list;
	unsigned int j;
	int num;

	va_start(ap_list, n);

	if (separator == NULL)
		separator = "";

	for (j = 0; j < n; j++)
	{
		num = va_arg(ap_list, int);
		printf("%d", num);
		if (j < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap_list);

}
