#include "main.h"

/**
 * flip_bits - The number of different bits btw two numbers
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to flip
 * to get from a number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif, checker;
	unsigned int count, i;

	count = 0;
	checker = 1;
	dif = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (dif & checker))
			count++;
		checker <<= 1;
	}
	return (count);
}
