#include <stdarg.h>
/**
 *sum_them_all - sums up integers using variadic function
 *@n: fixed parameter
 *Return: sum or (0) if n == 0;
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list num;
if (n == 0)
return (0);
va_start(num, n);
for (i = 0; i < n; i++)
sum += va_arg(num, int);
va_end(num);
return (sum);
}
