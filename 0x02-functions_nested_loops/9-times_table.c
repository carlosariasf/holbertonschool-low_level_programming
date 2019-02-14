#include "holberton.h"
/**
 * times_table - Init function
 * @ n : Description of parameter n
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
void times_table(void)
{
int h;
int h2;
int h3;

	for (h = 0; h <= 9; h++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
			h3 = h * h2;
		if (h3 < 10)
		{
			if (h2 > 0)
				{
				_putchar(' ');
				_putchar(' ');
				}
				_putchar(h3 + '0');
				if (h2 < 9)
				{
				_putchar(',');
				}
		}
		else
		{
			_putchar(' ');
			_putchar((h3 / 10) + '0');
			_putchar((h3 % 10) + '0');
			if (h2 < 9)
			{
			_putchar(',');
			}
		}
		}
	_putchar('\n');
	}
}
