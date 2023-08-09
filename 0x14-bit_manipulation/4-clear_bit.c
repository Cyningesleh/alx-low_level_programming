#include "main.h"

/**
 * clear_bit - func that sets the value of a bit to 0
 * @n: The number to set
 * @index: The index at which to set bit
 *
 * Return: 1 if success, or -1 if  error
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
