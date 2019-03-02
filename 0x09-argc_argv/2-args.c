#include "holberton.h"
/**
 * main - Best
 * @argc: char
 * @argv: char
 * Return: 0
**/
int main(int argc, char *argv[])
{
int i, ii;
char *p;

for (i = 0; i < argc; i++)
{
p = argv[i];
for (ii = 0; p[ii] != '\0'; p++)
{
_putchar(*p);
}
_putchar('\n');
}

return (0);
}
