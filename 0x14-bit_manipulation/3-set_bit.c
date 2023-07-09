#include "main.h"

/**
 * set_bit - func that sets the value of bit to 1 at given index.
 * @n: the number to be set
 * @index: the index to set bit
 *
 * Return: 1 if worked, or -1 if error.
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
