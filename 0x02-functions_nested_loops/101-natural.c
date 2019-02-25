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
	int sum;

	for (o = 1; o < 1024; o++)
	{
		if (o % 3 == 0 || o % 5 == 0)
		{
		sum += o;
		}
	}
printf("%d\n", sum);

return (0);
}
