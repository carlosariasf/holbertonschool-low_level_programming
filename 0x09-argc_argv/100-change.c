#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - atoi
 * @argc: char
 * @argv: char
 * Return: 0
**/
int main(int argc, char *argv[])
{
int i, ii, sum = 0;
char *p;

if (argc > 0)
{
	for (i = 1; i < argc; i++)
	{
	p = argv[i];
		for (ii = 0; p[ii] != '\0'; p++)
		{
			if (isalpha(*p))
			{
			printf("%s\n", "Error");
			return (1);
			}
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
}
else
{
	printf("%d\n", '0');
}

return (0);
}
