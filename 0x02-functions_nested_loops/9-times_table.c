#include "main.h"
#include <unistd.h>

/**
 * 9-times_table - prints the 9 times table, starting with 0
 *
 * Return: prints multiples of 9, 0 otherwise
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{	for (j = 0; j <= 9; j++)
		{
			k = i * j;
			write(1, &k, );
			write(1, ",", 1);
			write(1, " ", 1);
		}

		_putchar('\n');
	}
}
