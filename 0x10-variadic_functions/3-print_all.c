#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - This Function prints strings
 *@format: List of arguments to be passed
 */
void print_all(const char * const format, ...)
{
unsigned int i;
float f;
char const *ptr, *s;
va_list args;

ptr = format;
va_start(args, format);
while (ptr != NULL && *ptr != '\0')
{
switch (*ptr)
{
case 'c':
i = va_arg(args, int);
putchar(i);
break;
case 's':
s = va_arg(args, char*);
if (s == NULL)
{
printf("(nil)");
break;
}
printf("%s", s);
break;
case 'i':
i = va_arg(args, int);
printf("%d", i);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
}
if (*(ptr + 1) != '\0' &&
(*ptr == 's' || *ptr == 'c' || *ptr == 'i' || *ptr == 'f'))
printf(", ");
str++;
}
va_end(args);
printf("\n");
}
