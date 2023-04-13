#include "search_algos.h"

/**
 * jump_search - looks for value in sorted array of integers by Jump Search
 * @array: array containing arguments passed to the program
 * @size: number of arguments
 * @value: value to search for
 * Return: index where value is located, -1 if array is NULL/ value not present
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t step, top;

	if (array == NULL)
		return (-1);

	step = (sqrt(size));

	for (; i < size; i += step)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       i - step, i);
			top = i;
			i = i - step;
			break;
		}
		else if (i == size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       i, i + step);
			top = i;
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	for (; i <= top; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
