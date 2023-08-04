#include "main.h"

/**
 * get_bit - To return the value of a bit at an index in decimal numbers
 * @n: The number to search
 * @index: The index of bit
 *
 * Return: The value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
