#include "main.h"

/**
 * binary_to_uint - This func converts a binary num to an unsigned int.
 * @b: A ptr to a str that contains a binary number
 *
 * Return:0 if error or unsigned int with decimal value of a binary num.
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}
	for (count = 0; b[count] != '\0'; count++)
	{
		num <<= 1;
		if (b[count] == '1')
			num += 1;
	}
	return (num);
}
