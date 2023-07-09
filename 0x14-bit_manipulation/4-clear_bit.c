#include "main.h"

/**
 * clear_bit - func that sets value of bit to 0 at a given index.
 * @n: the number to be set
 * @index: the index at which to set a bit
 *
 * Return: 1 if pass, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	s = ~(1 << index);
	*n = *n & s;
	return (1);
}
