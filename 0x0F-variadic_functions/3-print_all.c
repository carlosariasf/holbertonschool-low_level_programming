#include <stdio.h>
#include <stdarg.h>

char op_char(char a)
{
printf("%c", a);
}

typedef struct op
{
    char *op;
    int (*f)(int a);
} op_t;

op_t ops[] = {
{"c", op_char},
{"i", op_int},
{"f", op_float},
{"s", op_string},
{NULL, NULL}
};

/**
 * print_numbers - Function
 * @separator: char
 * @n: unsigned int
 * Return: sum of values
**/
void print_all(const char * const format, ...)
{
va_list valisti;
unsigned int i;
char *q;

va_start(valisti, format);

while (va_arg(valisti, char *) != ops[i])
	i++;

/**
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
**/
va_end(valisti);
}
