#include "main.h"

/**
 * set_bit - To set a bit at given index to 1
 * @n: The pointer to number to change
 * @index: The index of bit set to 1
 *
 * Return: Always 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
