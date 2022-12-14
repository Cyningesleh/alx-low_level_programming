#include "main.h"

/**
*print_alphabet - To print alphabets in lower case
*
*Return: Always 0 - (success)
*/
void print_alphabet(void)
{
int x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
return (0);
}
