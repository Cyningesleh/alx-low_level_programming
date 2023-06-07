#include "main.h"
#include <stdio.h>

/**
 *factorial - this function returns the factorial of a number
 *
 *@n: integer to print
 *Return: Always 1.
 */

int factorial(int n)
{
if (n > 0)
return (n * factorial(n - 1));
if (n < 0)
return (-1);
else
return (1);
}
