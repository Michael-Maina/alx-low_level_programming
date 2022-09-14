#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @a: integer to be checked
 * Return: prints integer without a sign
 */

int _abs(int a)
{
	if (a >= 0)
		_putchar(a);
	else
		_putchar(a * -1);
	return (0);
}
