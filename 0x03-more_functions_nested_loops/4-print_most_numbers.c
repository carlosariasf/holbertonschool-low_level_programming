#include "holberton.h"
/**
 * print_most_numbers - Init function
 * @ c : Description of parameter n
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
void print_most_numbers(void)
{
int c;

	for (c = 0; c < 10; c++)
	{
	if (c != 2 && c != 4)
	{
	_putchar('0' + c);
	}
	}
_putchar('\n');
}
