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
int i, sum = 0;
if (argc > 0)
{
for (i = 0; i < argc; i++)
{
if (!isalpha(*argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("%s\n", "Error");
return (1);
}
}
printf("%d\n", sum);
}
else
{
printf("%d\n", '0');
}

return (0);
}
