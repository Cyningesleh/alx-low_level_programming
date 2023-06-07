#include "main.h"
#include <stdio.h>

/**
 *_print_rev_recursion - This function will print a string in the reverse format.
 *@s: The string to be printed
 */

void _print_rev_recursion(char *s)
{
if(*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
