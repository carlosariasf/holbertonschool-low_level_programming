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
	int n2;
	int c = 0;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	for (n2 = '0'; n2 <= '9'; n2++)
	{
		putchar(n2);
		if (c != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	c++;
	}
	putchar('\n');

	return (0);
}
