#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Function
 * @format: const char * const
 *
 *
**/
void print_all(const char * const format, ...)
{
va_list print;
int i = 0;
char *p;

va_start(print, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case('c'):
			printf("%c", va_arg(print, int));
			break;
		case('i'):
			printf("%i", va_arg(print, int));
			break;
		case('f'):
			printf("%f", va_arg(print, double));
			break;
		case('s'):
			p = va_arg(print, char *);
			if (p)
			{
				printf("%s", p);
				break;
			}
			printf("%p", p);
			break;
		default:
			i++;
			continue;
		}
	if (format[i + 1] != '\0')
	{
		printf(", ");
	}
	i++;
	}
printf("\n");
va_end(print);
}
