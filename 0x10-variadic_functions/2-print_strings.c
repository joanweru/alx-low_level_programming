#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: input string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list ap_list;
	char *s;

	va_start(ap_list, n);
	if (!separator)
		separator = "";

	for (j = 0; j < n; j++)
	{
		s = va_arg(ap_list, char*);
		if (!s)
			s = "(nil)";
		printf("%s", s);
		if (j < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap_list);
}

