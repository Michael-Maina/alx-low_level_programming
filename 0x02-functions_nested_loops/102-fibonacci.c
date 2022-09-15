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

	for (n = 0; n <= 49; n++)
	{
		if (n == 0)
			printf("%ld, %ld ,", a, b);
		
	       	else if (n != 49)
		{
			c = a + b;
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
