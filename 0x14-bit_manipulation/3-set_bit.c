#include "main.h"

/**
 * set_bit - func that sets the value of bit to 1.
 * @n: The number to set
 * @index: The index at which to set the bit
 *
 * Return: 1 if success, or -1 if an error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	s = 1 << index;
	*n = *n | s;
	return (1);
}
