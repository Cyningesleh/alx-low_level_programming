#include "main.h"

/**
 * _power_base - func that calculates base ^ power
 * @base: The base of the exponent
 * @power: The power of the exponent
 *
 * Return: THe value of base ^ power
 */
unsigned long int _power_base(unsigned int base, unsigned int power)
{
  unsigned long int value = 1;
	unsigned int i;

	for (i = 1; i <= power; i++)
		value *= base;
	return (value);
}

/**
 * print_binary - func that prints a number in binary notation
 * @n: The number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, checker;
	char flag;

	flag = 0;
	div = _power_base(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		checker = n & div;
		if (checker == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
