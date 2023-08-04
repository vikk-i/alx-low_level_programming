#include "main.h"

/**
 * get_endianness - To check if a machine is a little or a big endian
 * Return: Always 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
