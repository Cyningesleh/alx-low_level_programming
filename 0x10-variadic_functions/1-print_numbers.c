#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - function that prints numbers
 *@separator: string to be printed between numbers
 *@n: number of int passed to functions
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list list;

va_start(list, n);

for (i = 1; i <= n; i++)
{
num = va_arg(list, int);
printf("%d", num);
if (separator != NULL && i != n)
printf("%s", separator);
}
printf("\n");

va_end(list);
}
