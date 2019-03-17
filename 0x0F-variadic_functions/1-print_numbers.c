#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Function
 * @separator: char
 * @n: unsigned int
 * Return: sum of values
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valisti;
unsigned int i;

va_start(valisti, n);

if (separator)
{
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valisti, int));
		if (i < (n - 1))
			printf("%s", separator);
	}
}
else
	for (i = 0; i < n; i++)
		printf("%d", va_arg(valisti, int));
printf("%c", '\n');
va_end(valisti);
}
