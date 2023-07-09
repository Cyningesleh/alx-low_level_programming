#include "main.h"

/**
 * flip_bits - the number of diff. bits between two numbers
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to be flip
 * to move from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif, chk;
	unsigned int count, i;

	count = 0;
	chk = 1;
	dif = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (chk == (dif & chk))
			count++;
		chk <<= 1;
	}
	return (count);
}
