#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @n: number of elements in array to be printed
 * @a: array to be printed
 * Numbers to be separated by comma then a space
 * Numbers should be displayed in same order as in array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
		printf("%d, ", *a(i));

	printf("\n");
}
