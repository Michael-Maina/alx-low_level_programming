#include "search_algos.h"

int binary_search_it(int *array, size_t size, int value, size_t prev);

/**
 * exponential_search - looks for value in sorted array of integers by
 *                         Exponential Search
 * @array: array containing arguments passed to the program
 * @size: number of arguments
 * @value: value to search for
 * Return: index where value is located, -1 if array is NULL/ value not present
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t low, high;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	low = i / 2;
	high = i < (size - 1) ? i : (size - 1);

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	return (binary_search_it(&array[low], high, value, low));
}

/**
 * binary_search_it - looks for value in sorted array of integers by
 *                         Binary Search
 * @array: array containing arguments passed to the program
 * @size: number of arguments
 * @value: value to search for
 * @prev: lower bound of array
 * Return: index where value is located, -1 if array is NULL/ value not present
 */

int binary_search_it(int *array, size_t size, int value, size_t prev)
{
	size_t low = 0, high = size - prev;
	size_t mid, i = 0;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		i = low;
		printf("Searching in array: ");
		for (; i <= high; i++)
		{
			if (i != high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		mid = (high + low) / 2;
		if (array[mid] == value)
			return (mid + prev);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
