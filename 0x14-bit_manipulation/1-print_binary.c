#include "main.h"

/**
 * _pow - This function calculates base ^ power
 * @base: the base of exponent
 * @power: the power of exponent
 *
 * Return: the value of base ^ power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int i;

	num = 1;
	for (i = 1; i <= power; i++)
		number *= base;
	return (number);
}

/**
 * print_binary - this func prints a number in binary notation
 * @n: the number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, chk;
	char flag;

	flag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		chk = n & div;
		if (chk == div)
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
