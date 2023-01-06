#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion - function that prints the length of a string.
 *
 *@n: string to be printed
 *Return: Always 0.
 */

int _strlen_recursion(char *n)
{
if (*n == '\0')
return (0);
else
{
return (1 + _strlen_recursion(n + 1));
_putchar('\n');
}
}
