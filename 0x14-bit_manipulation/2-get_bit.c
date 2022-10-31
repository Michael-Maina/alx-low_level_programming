#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be converted to binary first
 * @index: position of bit in binary number
 * Return: bit at index, or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int array[32];

	if (n == 0)
	{
		return (0);
	}

	while (n > 0)
	{
		array[i] = n % 2;
		n = n / 2;
		i++;
	}

	i -= 1;

	if (index > i)
		return (-1);

	return (array[index]);

}
