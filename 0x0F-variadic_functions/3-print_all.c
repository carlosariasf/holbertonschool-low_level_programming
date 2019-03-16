#include <stdio.h>
#include <stdarg.h>
/**
 * print_newline - Print , and \n
 * @a: char
**/
void print_newline(char a)
{
	switch (a)
	{
	case('\0'):
		printf("\n");
		break;
	default:
		printf(", ");
		break;
	}

}
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
	print_newline(format[i + 1]);
	i++;
	}
va_end(print);
}
