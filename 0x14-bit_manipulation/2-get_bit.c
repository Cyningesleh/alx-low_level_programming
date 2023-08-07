#include"main.h"

/**
 * get_bit - func that returns the value of a bit at given index.
 * @n: The number to check bits in index
 * @index: The index at which to check bit in.
 *
 * Return: The value of bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	checker = n & div;
	if (checker == div)
		return (1);
	return (0);
}
