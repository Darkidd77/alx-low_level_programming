#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 *                 of integers.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements.
 * @value: The value to search for.
 *
 * Return: If value is not present or array is NULL, -1.
 *         Otherwise, the first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (x = 0; x < size; x++)
	{
		/* Print value being checked */
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);

		/* If the value is found */
		if (array[x] == value)

			/* Return index of the value */
			return (x);
	}

	/* Value not found, return -1 */
	return (-1);
}
