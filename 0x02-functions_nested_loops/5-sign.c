#include "holberton.h"
/**
 * print_sign - Init function
 * @n: Description of parameter n
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}

return (0);
}
