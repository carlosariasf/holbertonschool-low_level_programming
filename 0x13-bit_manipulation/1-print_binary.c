#include "holberton.h"
/**
 * print_binary - first point.
 * @n: pointer to a string.
 * Return: void.
 **/
void print_binary(unsigned long int n)
{
	unsigned long int a = n & 1;
	
	if (n > 1)
	{
		n = n >> 1;
		print_binary(n);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return;
	}
	if (a == 0)
		_putchar('0');
	if (a == 1)
		_putchar('1');
}

