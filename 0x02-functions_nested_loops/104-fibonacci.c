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

	printf("%lu, %lu ,", a, b);

	for (n = 0; n <= 95; n++)
	{
		c = a + b;

		if (n != 95)
		{
			printf("%lu, ", c);
			a = b;
			b = c;
		}
		else
			printf("%lu", c);
	}

	printf("\n");
	return (0);
}
