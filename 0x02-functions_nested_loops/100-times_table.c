#include "holberton.h"
/**
 * print_times_table - Init function
 * @ n : Description of parameter n
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
void print_times_table(int n)
{
int h, h2, h3;

	if (n > 0 && n < 15)
	{
	for (h = 0; h <= n; h++)
	{
		for (h2 = 0; h2 <= n; h2++)
		{
			h3 = h * h2;
			if (h3 < 10)
			{
				if (h2 > 0)
				{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				}
				_putchar(h3 + '0');
			}
			else if (h3 > 99)
			{
				_putchar(' ');
				_putchar((h3 / 100) + '0');
				_putchar(((h3 % 100) / 10) + '0');
				_putchar((h3 % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(((h3 % 100) / 10) + '0');
				_putchar((h3 % 10) + '0');
			}
			if (h2 < n)
			{
			_putchar(',');
			}
		}
	_putchar('\n');
	}
	}
}
