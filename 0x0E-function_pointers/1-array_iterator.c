#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - Function
 * @char: string
 * @f: pointer to fuction
 *
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

for(i = 0; i < size; i++)
	action(array[i]);
}
