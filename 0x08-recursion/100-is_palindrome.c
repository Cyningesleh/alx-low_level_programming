#include "main.h"xc
/**
 * _strlen_recursion - this will Print the length of a string.
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
if (s[0] != '\0')
return (1 + _strlen_recursion(s + 1));
return (0);
}
/**
 * pal_check - check if s is palindrome.
 * @s: string base address.
 * @i: left index.
 * @j: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_check(char *s, int i, int j)
{
if (s[i] == s[j])
if (i > j / 2)
return (1);
else
return (pal_check(s, i + 1, j - 1));
else
return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
return (pal_check(s, 0, _strlen_recursion(s) - 1));
}
