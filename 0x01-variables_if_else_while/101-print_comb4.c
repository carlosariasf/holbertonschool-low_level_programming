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
	int c = 0;

	for (n = '0'; n <= '9'; n++)
	{
	for (n2 = '0'; n2 <= '9'; n2++)
	{
		for (n3 = '0'; n3 <= '9'; n3++)
		{
			if (n <= n2 && n2 <= n3  && n != n2 && n2 != n3)
			{
			putchar(n);
			putchar(n2);
			putchar(n3);
			c++;
			if (c < 126)
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	}
	c++;
	}
	putchar('\n');

	return (0);
}
