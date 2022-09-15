#include "main.h"

/**
 * _isdigit - checks for a digit, from 0 - 9
* @c: variable to be checked
 *
 * Return: returns 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
