#include "main.h"
#include <stdio.h>
/**
 *_puts_recursion - This Function prints a string using recursive logic
 *
 *@s: String to be printed
 *
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
if (*s == '\0')
{
_putchar('\n');
}

}
