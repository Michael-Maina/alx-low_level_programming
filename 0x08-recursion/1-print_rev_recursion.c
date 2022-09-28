#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be reversed
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(str + 1);
		_putchar(*s);
	}
	
	_putchar('\n');
}
