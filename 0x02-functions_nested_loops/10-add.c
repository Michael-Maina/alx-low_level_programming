#include "main.h"

/**
 * add - adds two integers and prints the result
 * @a, b: integers to be added
 *
 * Return: prints sum; 0 otherwise
 */

int add(int a, int b)
{
	int sum;

	sum = a + b;

	write(1, &sum, 1);

	return (0);
}
