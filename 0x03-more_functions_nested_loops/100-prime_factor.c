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
long a = 612852475143;
long b = 2;
long res;

while (b < a)
{
	if (a % b == 0)
	{
	a = a / b;
	res = a;
	}
b++;
}
printf("%ld", res);
printf("\n");

return (0);
}
