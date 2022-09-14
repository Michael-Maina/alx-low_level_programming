#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: prints the first 98 fibonacci numbers, starting with 1 and 2
 */

int main(void)
{
	int n;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;

	printf("%ld, %ld ,", a, b);

	for (n = 0; n <= 95; n++)
	{
		c = a + b;

		if (n != 95)
		{
			printf("%ld, ", c);
			a = b;
			b = c;
		}
		else
			printf("%ld", c);
	}

	printf("\n");
	return (0);
}
