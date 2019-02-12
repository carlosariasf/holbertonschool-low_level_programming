#include "holberton.h"
/**
 * print_last_digit - Init function
 * @n: Description of parameter r
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
int print_last_digit(int n)
{
	
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar('0' + n%10);
	return (n%10);
}
