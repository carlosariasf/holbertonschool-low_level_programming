#include "holberton.h"
/**
 * print_line - Init function
 * @n: Description of parameter n
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
void print_line(int n)
{
int c;

	if(n > 0)
	{
		for (c = 0; c <= n; c++)
		{
			_putchar('_');
		}
	}
		_putchar('\n');
}
