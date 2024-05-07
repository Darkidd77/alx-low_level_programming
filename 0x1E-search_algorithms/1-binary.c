#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 *                 of integers using binary search.
 * @array: A pointer to first element of the array to search.
 * @size: The number of elements.
 * @value: The value.
 *
 * Return: If value is not present or the array is NULL, -1.
 *         Otherwise, index where the value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x, left, right;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform binary search */
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (x = left; x < right; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		/* Calculate middle index */
		x = left + (right - left) / 2;

		/* If middle element is the value */
		if (array[x] == value)
			/* Return the index */
			return (x);

		/* If middle element is greater than the value */
		if (array[i] > value)
			/* Update right boundary */
			right = x - 1;
		else
			/* Otherwise, update left boundary */
			left = x + 1;
	}
	/* Value not found, return -1 */
	return (-1);
}
