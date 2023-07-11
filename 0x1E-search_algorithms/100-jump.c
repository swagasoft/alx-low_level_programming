#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: array of integers
 * @size: size of array
 * @value: value at be searched
 *
 * Return: index of value searched or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t min = 0, max = sqrt(size), y;

	if (array == NULL)
		return (-1);

	printf("Value checked array[0] = [%d]\n", array[0]);
	for (y = 0; array[max] < value && max < size; y++)
	{
		printf("Value checked array[%ld] = [%d]\n", max, array[max]);
		min = max;
		max = max + sqrt(size);
		if (min >= size)
			return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", min, max);
	while (array[min] <= value && min < size)
	{
		printf("Value checked array[%ld] = [%d]\n", min, array[min]);
		min++;
		if (array[min] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", min, array[min]);
			return (min);
		}
	}

	return (-1);
}
