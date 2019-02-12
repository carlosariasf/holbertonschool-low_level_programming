#include "holberton.h"
/**
 * main - Init function
 * a blank line
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
int main(void)
{
char n[] = "Holberton";
int s = sizeof(n) - 1;
int o;

for (o = 0; o < s; o++)
{
	_putchar(n[o]);
}
	_putchar('\n');

return (0);
}
