#include "main.h"

/**
 * clear_bit - To set the value of bit to 0
 * @n: The pointer to number to change
 * @index: The index of the to clear
 *
 * Return: Always 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
