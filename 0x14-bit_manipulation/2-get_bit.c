#include"main.h"

/**
 * get_bit - func that returns the value of a bit at given index.
 * @n: the number to check the bits
 * @index: the index at which to check the bit
 *
 * Return: -1 if there is error or value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, chk;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	chk = n & div;
	if (chk == div)
		return (1);
	return (0);
}
