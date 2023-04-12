#include "search_algos.h"

/**
 * interpolation_search - looks for value in sorted array of integers by
 *                         Interpolation Search
 * @array: array containing arguments passed to the program
 * @size: number of arguments
 * @value: value to search for
 * Return: index where value is located, -1 if array is NULL/ value not present
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			    * (value - array[low]));
		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n",
			       pos);
			break;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
			else if (array[pos] > value)
				high = pos - 1;
			else
				low = pos + 1;
		}
	}

	return (-1);
}
