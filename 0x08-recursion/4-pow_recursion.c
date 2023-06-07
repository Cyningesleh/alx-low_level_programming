#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion - This function prints an integer to the power of y.
 *
 *@x: The integer to be printed
 *@y: power of
 *Return: Always 1.
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
if (y < 0)
return (-1);
else
return (x * _pow_recursion(x, y - 1));
}
