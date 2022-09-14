#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @a: integer to be checked
 * Return: prints integer without a sign
 */

int _abs(int a)
{
	if (a < 0)
		a = a * -1;

	_putchar(a);

	return (0);
}
