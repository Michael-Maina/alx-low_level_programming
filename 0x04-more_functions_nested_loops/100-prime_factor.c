#include <stdio.h>

/**
* main - prints largest prime factor.
*
* Return: Always 0.
*/

int main(void)
{
	long int n, prime_factor;

	n = 612852475143;

	for (prime_factor = 2; prime_factor <= n; prime_factor++)
	{
		if (n % prime_factor == 0)
		{
			n /= prime_factor;
			prime_factor--;
		}
	}
	printf("%ld\n", prime_factor);
	return (0);
}
