#include "main.h"
#include <stdio.h>

long unsigned int _pow(int base, int index);

/**
 * print_binary - prints the binary representation of a number
 * @n: integer to be converted
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int num = 0;
	int power = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (num <= n)
	{
		num += _pow(2, power);
		power++;
	}

	power--;

	while (power >= 0)
	{
		if (n >= _pow(2, power))
		{
			n = n - _pow(2, power);
			_putchar('1');
		}

	        else
			_putchar('0');

		power--;
	}
}

/**
 * _pow - computes power of an integer
 * @base: base
 * @index: power
 * Return: integer raised to power
 */

long unsigned int _pow(int base, int index)
{
	long unsigned int product = 1;

	if (index == 0)
		return (1);

	while (index > 0)
	{
		product *= base;
		index--;
	}
	return (product);
}
