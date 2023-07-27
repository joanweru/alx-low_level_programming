#include <lists.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints You're beat! and yet, you must allow,
 * \nI bore my house upon my back!\n before the main
 * function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");/*ignore*/
	printf("I bore my house upon my back!\n");/*printing*/
}
