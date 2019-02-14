#include "holberton.h"
#include <stdio.h>
/**
 * main - Init function
 * @ a : Description of parameter n
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
int main(void)
{
long a = 1231952;
long b;

for (b = 2; b < a; b++)
{
	if (a % b == 0)
	{
	a = a / b;
	b = 2; 
	printf("%li\n", b);
	}
}

return (0);
}
