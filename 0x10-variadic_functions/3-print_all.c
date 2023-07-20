#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *s, *sprt = "";
	va_list ap_list;

	va_start(ap_list, format);

	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", sprt, va_arg(ap_list, int));
				break;
			case 'i':
				printf("%s%d", sprt, va_arg(ap_list, int));
				break;
			case 's':
				s = va_arg(ap_list, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", sprt, s);
				break;
			case 'f':
				printf("%s%f", sprt, va_arg(ap_list, double));
				break;

			default:
				j++;
				continue;
		}
		sprt = ", ";
		j++;
	}
	printf("\n");
	va_end(ap_list);
}

