#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9, except 2 and 4
 *
 * Return: list numbers except 0 - 9
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			i++;
		else
			_putchar(i);
	}

	_putchar('\n');
}
