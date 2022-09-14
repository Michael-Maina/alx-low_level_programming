#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: prints sum of even numbered fibonacci numbers less than 4,000,000
 */

int main(void)
{
	int n = 0;
	long int a = 1;
	long int b = 2;
	long int c;
	long int sum = 0;

        while (a + b < 4000000)
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0)
			sum = sum + c;
		n++;
	 }

	printf("%ld\n", sum);
	return (0);
}
