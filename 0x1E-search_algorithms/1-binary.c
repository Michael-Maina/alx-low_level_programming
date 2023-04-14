#include "search_algos.h"

/**
 * binary_search - looks for value in sorted array of integers by Binary Search
 * @array: array containing arguments passed to the program
 * @size: number of arguments
 * @value: value to search for
 * Return: index where value is located, -1 if array is NULL/ value not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int mid_idx, result;

	if (array == NULL || size < 1)
		return (-1);

	printf("Searching in array: ");
	for (; i < size; i++)
	{
		if (i != size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}

	mid_idx = (size / 2);

	if (size % 2 == 0 && value < array[mid_idx])
		size = mid_idx - 1;
	else
		size = mid_idx;

	if (array[mid_idx] == value)
		return (mid_idx);
	else if (value < array[mid_idx])
		return (binary_search(array, size, value));

	result = binary_search(&array[mid_idx + 1], size, value);
	if (result != -1)
		result += mid_idx + 1;
	return (result);

	return (-1);
}
