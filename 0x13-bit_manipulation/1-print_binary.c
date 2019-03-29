#include <stdio.h>
#include "holberton.h"
/**
 * print_binary - Binary
 * @n: int number
 * Return: void.
**/
void print_binary(unsigned long int n)
{
unsigned long int h = n & 1;

	if (n > 1)
	{
		n = n >> 1;
		print_binary(n);
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (h == 0)
		_putchar('0');
	else if (h == 1)
		_putchar('1');
}
