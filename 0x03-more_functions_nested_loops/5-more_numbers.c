#include "holberton.h"
/**
 * more_numbers - Init function
 * @ c : Description of parameter n
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
void more_numbers(void)
{
int c, n;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
			_putchar(((n % 100) / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
	_putchar('\n');
	}
}
