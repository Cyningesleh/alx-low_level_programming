#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion - this function prints length of a string.
 *
 *@s: string to print
 *Return: Always 0.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
{
return (1 + _strlen_recursion(s + 1));
_putchar('\n');
}
}
