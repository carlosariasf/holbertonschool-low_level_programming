#include "holberton.h"
/**
 * print_diagonal - Init function
 * @n: Description of parameter n
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
void print_diagonal(int n)
{
int c,b;

	if (n > 0)
	{
		for (c = 0; c <= n; c++)
		{
			for (b = 0; b < c; b++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
