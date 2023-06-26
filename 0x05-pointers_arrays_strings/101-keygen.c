#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates random valid passwords
  * for the program 101-crackme
  *
  * Return: zero if code was success
  */
int main(void)
{
	int pass[100];
	int index, sum, num;

	sum = 0;

	srand(time(NULL));

	for (index = 0; index < 100; index++)
	{
		pass[index] = rand() % 78;
		sum += (pass[index] + '0');
		putchar(pass[index] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			num = 2772 - sum - '0';
			sum += num;
			putchar(num + '0');
			break;

		}
	}

	return (0);
}
