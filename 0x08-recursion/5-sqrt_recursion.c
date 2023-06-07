#include "main.h"

/**
 * verify - looks for the square root
 * @a:int
 * @b:int
 *
 * Return: int
 */
int verify(int a, int b)
{
if (a * a == b)
return (a);
if (a * a > b)
return (-1);
return (verify(a + 1, b));
}

/**
 * _sqrt_recursion - this returns the natural square root of a number
 * @n: integer to find square root of
 * Return: the natural square root or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (verify(1, n));
}
