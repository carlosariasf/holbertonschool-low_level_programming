#include "holberton.h"
#include <stdio.h>
/**
 * main - Init function
 * @ c : Description of parameter n
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
int main(void)
{
int c;

	for (c = 0; c <= 100; c++)
	{
		if ((c % 3) != 0 && (c % 5) != 0)
		{
		printf("%d ", c);
		}
		else if ((c % 3) == 0 && (c % 5) == 0 && c > 0)
		{
		printf("%s", "FizzBuzz ");
		}
		else if ((c % 3) == 0 && c > 0)
		{
		printf("%s", "Fizz ");
		}
		else if ((c % 5) == 0 && c > 0 && c < 100)
		{
		printf("%s", "Buzz ");
		}
		else if (c == 100)
		{
		printf("%s", "Buzz");
		}
	}
	printf("%c", '\n');

return (0);
}
