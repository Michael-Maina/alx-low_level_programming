#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: prints the first 50 fibonacci numbers, starting with 1 and 2
 */

int main(void)
{
	int n;
	long int a = 1;
	long int b = 2;
	long int c;

	fprintf(stderr, "%ld, %ld ,", a, b);

	for (n = 0; n <= 47; n++)
	{
		c = a + b;

		if (n != 47)
		{
			fprintf(stderr, "%ld, ", c);
			a = b;
			b = c;
		}
		else
			fprintf(stderr, "%ld", c);
	}

	printf("\n");
	return (0);
}
