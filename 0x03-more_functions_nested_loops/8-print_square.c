#include "holberton.h"
/**
 * print_square - Init function
 * @size: Description of parameter n
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
void print_square(int size)
{
int c, b;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			for (b = 0; b < size; b++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}
}
