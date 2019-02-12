#include "holberton.h"
/**
 * print_alphabet_x10 - Init function
 * a blank line
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
void print_alphabet_x10(void)
{
char n;
int o;

for (o = 0; o < 10; o++)
{
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
		_putchar('\n');
	}
}
