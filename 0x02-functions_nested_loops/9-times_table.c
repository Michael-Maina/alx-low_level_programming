#include "main.h"

/**
 * 9-times_table - prints the 9 times table, starting with 0
 *
 * Return: prints multiples of 9, 0 otherwise
 */

void times_table(void)
{
	// int i, j;

	int vols[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	int count, count_i;

	for (count = 0; count <= sizeof(vols); count++)
	{	for (count_i = 0; count_i <= sizeof(vols); count_i++)
		{
			_putchar(vols[count] * vols[count_i]);
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
