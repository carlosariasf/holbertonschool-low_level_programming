#include <stdio.h>
/**
 * main - Init function
 *
 * Description: Longer description of the function
 * section header: Section description
 * Return: Description of the returned value
 */
int main(void)
{
	char c;
	char nl = '\n';

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
	putchar(c);
	}
	putchar(nl);

	return (0);
}
