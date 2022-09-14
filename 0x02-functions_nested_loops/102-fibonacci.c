#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: prints the first 50 fibonacci numbers, starting with 1 and 2
 */

int main(void)
{
	int n;
	int a = 1;
	int b = 2;
	int c;

	printf("%d, %d ,", a, b);

	for (n = 0; n <= 47; n++)
	{
		c = a + b;

		if (n != 47)
		{
			printf("%d, ", c);
			a = b;
			b = c;
		}
		else
			printf("%d", c);
	}

	printf("\n");
	return (0);
}
