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
	int nc;
	int nc2;

	for (n = '0'; n <= '9'; n++)
	{
	for (n2 = '0'; n2 <= '9'; n2++)
	{
		if(n != n2 && n2 != nc && n != nc2)
		{
		putchar(n);
		putchar(n2);
		c++;
		if (c < 99)
		{
			putchar(',');
			putchar(' ');
		}
		}
		else
		{
		nc = n;
		nc2 = n2; 
		}
	}
	c++;
	}
	putchar('\n');

	return (0);
}
