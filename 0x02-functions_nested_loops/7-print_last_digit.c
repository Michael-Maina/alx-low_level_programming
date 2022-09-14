#include "main.h"
#include <unistd.h>
/**
 * print_last_digit - prints the last digit of a number
 *
 * @a: number to be checked
 *
 * Return: prints last digit of a number; 0 otherwise
 */

int print_last_digit(int a)
{
	int last_digit;

	last_digit = a % 10;

	if (last_digit < 0)
		last_digit = last_digit * -1;

	return (last_digit);

	return (0);
}
