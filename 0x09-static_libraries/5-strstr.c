#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @longstack: the longer string to search
 * @pin: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *longstack, char *pin)
{
unsigned int i = 0, j = 0;

while (longstack[i])
{
while (pin[j] && (longstack[i] == pin[0]))
{
if (longstack[i + j] == pin[j])
j++;
else
break;
}
if (pin[j])
{
i++;
j = 0;
}
else
return (longstack + i);
}
return (0);
}
