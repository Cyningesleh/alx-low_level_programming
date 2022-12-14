#include "main.h"

/**
*main - entry point
*
*description - To print alphabets in lower case
*
*Return: Always 0 - (success)
*/
int main(void)
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
