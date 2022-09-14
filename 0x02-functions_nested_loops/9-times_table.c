#include "main.h"
#include <unistd.h>

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: prints multiples of 9, 0 otherwise
 */

void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if (k <= 9)
			{
				_putchar(k + '0');
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}

			else
			{
				l = k % 10;
				m = (k - l) / 10;
				_putchar(m + '0');
				_putchar(l + '0');
				_putchar(44);
				_putchar(32);
			}
		}

		_putchar('\n');
	}
}
