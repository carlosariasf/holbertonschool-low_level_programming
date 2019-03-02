#include "holberton.h"
/**
 * main - 
 *@argc: char
 *@argv: char
 *Return - 0
**/
int main(int argc, char *argv[])
{
int i;
char *p = *argv;

if (argc > 0)
{
for(i = 0; p[i] != '\0'; p++)
{
_putchar(*p);
}
}
_putchar('\n');

return (0);
}
