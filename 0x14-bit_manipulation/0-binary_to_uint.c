#include "main.h"

/**
 * binary_to_uint - This function converts a binary numbers to an unsigned int.
 * @b: a char pointer to a string that contains a binary number
 * Return: unsigned int with decimal value of binary number, || 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int num;

num = 0;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
num = num << 1;
if (b[i] == '1')
num += 1;
}
return (num);
}
