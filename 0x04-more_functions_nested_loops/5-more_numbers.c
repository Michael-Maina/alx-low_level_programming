#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14,
 * followed by new line
 *
 * Return: lists digits from 0 to 14 ten times
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		{
			j = i % 10;
			k = (i - j) / 10;
			_putchar(k + '0');
			_putchar(j + '0');
		}
		else
			_putchar(i + '\n');
	}
}
