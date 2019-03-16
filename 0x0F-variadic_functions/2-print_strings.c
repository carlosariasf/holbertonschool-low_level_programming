#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Function
 * @separator: char
 * @n: unsigned int
 * Return: sum of values
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valisti;
unsigned int i;
char *q;

va_start(valisti, n);

if (separator)
{
	for (i = 0; i < n; i++)
	{
		q = va_arg(valisti, char *);
		if (q != NULL)
		{
			printf("%s", q);
			if (i < (n - 1))
				printf("%s", separator);
		}
		else
			printf("%p", q);	
	}
}

else
	for (i = 0; i < n; i++)
		printf("%s", va_arg(valisti, char *));
printf("%c", '\n');

va_end(valisti);
}
