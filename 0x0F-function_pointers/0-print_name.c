#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - To print name
 * @f: function pointer
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (*f != NULL)
f(name);
}
