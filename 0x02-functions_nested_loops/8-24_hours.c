#include "holberton.h"
/**
 * jack_bauer - Init function
 * @ n : Description of parameter n
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
void jack_bauer(void)
{
int h;
int h2;
int m;
int m2;

	for (h = 0; h < 3; h++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
			for (m = 0; m < 6; m++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
				if (h < 2)
				{
				_putchar('0' + h);
				_putchar('0' + h2);
				_putchar(58);
				_putchar('0' + m);
				_putchar('0' + m2);
				_putchar('\n');
				}
				else if (h == 2 && h2 < 4)
				{
				_putchar('0' + h);
				_putchar('0' + h2);
				_putchar(58);
				_putchar('0' + m);
				_putchar('0' + m2);
				_putchar('\n');
				}
				}
			}
		}
	}
}
