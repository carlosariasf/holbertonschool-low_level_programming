#include "holberton.h"
/**
 * print_triangle - Init function
 * @size: Description of parameter n
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
void print_triangle(int size)
{
int c, b, a;

	if (size > 0)
	{
		for (c = 0; c <= size; c++)
		{
			if (c != 0)
			{
			for (b = (size - c); b > 0; b--)
			{
			_putchar(' ');
			}
			}
			for (a = 0; a < c; a++)
			{
			_putchar('#');
			}
		if (c > 0)
		{
		_putchar('\n');
		}
		}
	}
	else
	{
	_putchar('\n');
	}
}
