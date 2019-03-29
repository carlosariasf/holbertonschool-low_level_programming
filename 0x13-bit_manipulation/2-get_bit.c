#include "holberton.h"
/**
 * get_bit - first point.
 * @n: pointer to a string.
 * @index: test.
 * Return: test
 **/
int get_bit(unsigned long int n, unsigned int index)
{
if (index < 64)
	return (n >> index & 1);
return (-1);
}
