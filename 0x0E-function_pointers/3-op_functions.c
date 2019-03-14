#include "3-calc.h"
/**
 * op_add - Function
 * @a: int
 * @b: int
 * Return: int
**/
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - int
 * @a: int
 * @b: int
 * Return: int
**/
int op_sub(int a, int b)
{
int diff;

if (a > b)
	diff = a - b;
else
	diff = b - a;

return (diff);
}
/**
 * op_mul - int
 * @a: int
 * @b: int
 * Return: int
**/
int op_mul(int a, int b)
{
int i, result = 0;

for(i = 0; i < a; i++)
{
	result = result + b;
}

return (result);
}
/**
 * op_div - int
 * @a: int
 * @b: int
 * Return: int
**/
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - mod
 * @a: int
 * @b: int
 * Return: int
**/
int op_mod(int a, int b)
{
return (a % b);
}
