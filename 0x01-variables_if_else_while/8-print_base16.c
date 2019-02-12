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
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
	putchar(n);
	}
	putchar('\n');

	return (0);
}
