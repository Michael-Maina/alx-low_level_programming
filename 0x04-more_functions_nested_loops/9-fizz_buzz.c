#include <stdio.h>
#include <stdlib.h>

/**
 * main - program starts here
 * Prints numbers from 1 to 100
 * For multiples of 3, print Fizz instead
 * For multiples of 5, print Buzz instead
 * For multiples of both 3 and 5, print FizzBuzz
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");

		else if (i % 5 == 0)
			printf("Buzz ");

		else if (i % 3 == 0)
			printf("Fizz ");

		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
