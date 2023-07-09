#include "main.h"

/**
 * get_endianness -func. that checks the endianness
 *
 * Return: 0 if big endian, 1 if small endian
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
