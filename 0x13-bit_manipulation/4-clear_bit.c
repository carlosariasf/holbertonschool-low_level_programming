#include <stdio.h>
#include "holberton.h"
/**
 * clear_bit - first point.
 * @n: pointer to a string.
 * @index: test.
 * Return: test
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a = 1;

if (index < 64)
{
	a = a << index;
	*n = *n & (~a);
	return (1);
}
return (-1);
}
