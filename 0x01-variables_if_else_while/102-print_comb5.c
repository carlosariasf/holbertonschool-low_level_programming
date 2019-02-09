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
	int n3;
	int n4;
	int c = 0;

	for (n = '0'; n <= '9'; n++)
	{
	for (n2 = '0'; n2 <= '9'; n2++)
	{
	for (n3 = '0'; n3 <= '9'; n3++)		
	{
	for (n4 = '0'; n4 <= '9'; n4++)
	{
		if (n3 <= n4)
		{
		putchar(n);
		putchar(n2);
		putchar(' ');
		putchar(n3);
		putchar(n4);
		if (c < 99)
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
