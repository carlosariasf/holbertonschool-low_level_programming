#include "holberton.h"
#include <stdio.h>

/**
 * main- Init function
 * @ n : Description of parameter n
 * Description: Longer description of the function)?
 * Return: int
 */
int main(void)
{
	int o;

	for (o = 1; o < 1024; o++)
	{
		if (o % 3 == 0 || o % 5 == 0)
		{
		printf("%d\n", o);
		}
	}

return (0);
}
