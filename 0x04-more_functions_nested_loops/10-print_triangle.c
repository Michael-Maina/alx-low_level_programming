#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * # used to print triangle
 * print new line if size <= 0
 * Return: print triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (i = 0; i <= (size - 1); i++)
		{
			for (j = 0; j <= (size - 1) - i; j++)
				_putchar(' ');

			for (k = 1; k <= i; k++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
