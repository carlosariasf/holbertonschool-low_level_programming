#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function
 * @name: string
 * @f: pointer to fuction
 *
**/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL)
	if (f)
		f(name);
}
