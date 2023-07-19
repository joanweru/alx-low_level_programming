#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input name
 * @f : pointer to function printing name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
	return;
}

