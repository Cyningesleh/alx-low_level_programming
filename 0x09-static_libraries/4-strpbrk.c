#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @c:first occurrence in the string
 *
 * @approve: matches one of the bytes, or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *c, char *approve)
{
int i;
while (*c)
{
for (i = 0; approve[i]; i++)
{
if (*c == approve[i])
return (c);
}
c++;
}
return (0);
}
