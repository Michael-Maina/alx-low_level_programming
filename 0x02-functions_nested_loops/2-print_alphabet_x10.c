#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 * Print new line after
 *
 * Return:return type void
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
