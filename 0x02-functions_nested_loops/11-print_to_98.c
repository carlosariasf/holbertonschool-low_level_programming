#include "holberton.h"
/**
 * print_to_98- Init function
 * @n: Description of parameter n
 * Description: Longer description of the function)?
 * section header: Section description)*
 */
void print_to_98(int n)
{
	int o;

	if (n < 98)
	{
	for (o = n; o <= 98; o++)
	{
		if (o < 0)
		{
		_putchar('-');
			if (o < -9)
			{
			_putchar('0' + ((-o % 100) / 10));
			}
		_putchar('0' + (-o % 10));
		}
		else if (o < 10)
		{
		_putchar('0' + o);
		}
		else if (o > 9)
		{
		_putchar(((o % 100) / 10) + '0');
		_putchar((o % 10) + '0');
		}
		if (o < 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	}
	else
	{
		for (o = n; o >= 98; o--)
		{
		if (o > 99)
		{
		_putchar((o / 100) + '0');
		}
		_putchar(((o % 100) / 10) + '0');
		_putchar((o % 10) + '0');
		if (o > 98)
		{
		_putchar(',');
		_putchar(' ');
		}
		}
	}
	_putchar('\n');
}
