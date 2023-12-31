#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a dec number
 * @n: number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;
		return (bit_val);
}


