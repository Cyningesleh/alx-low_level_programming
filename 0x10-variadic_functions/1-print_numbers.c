#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - function that prints numbers
 *@separator: string to be printed between numbers
 *@n: number of int passed to functions
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
if (*separator == NULL)
printf("%s\n", "");
va_start(list, n);
for (int i = 1; i < = n; i++)
{
int num = va_arg(list, int);
printf("%d", num);
}

printf("\n");
va_end(list);
}
