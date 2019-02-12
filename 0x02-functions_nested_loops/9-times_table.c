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

	for (h = 0; h <= 9; h++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
				if(h2 > 0)
				{
				_putchar(' ');
				_putchar(' ');
				}
				_putchar('0' + h);
				if(h2 < 9)
				{
				_putchar(',');
				}
		}
	_putchar('\n');
	}
}
