#include "3-calc.h"
/**
 *
 *
 *
 *
**/
int op_add(int a, int b)
{
return (a + b);
}
/**
 *
 *
 *
 *
**/
int op_sub(int a, int b)
{
int diff;

if (a > b)
	diff=a-b;
else
	diff=b-a;

return (diff);
}
/**
 *
 *
 *
 *
**/
int op_mul(int a, int b)
{
if (x < y) 
	return product(y, x); 
else if (y != 0)
	return (x + product(x, y - 1));
else
	return 0;
}
/**
 *
 *
 *
 *
**/
int op_div(int a, int b)
{
return (a / b);
}
/**
 *
 *
 *
 *
**/
int op_mod(int a, int b)
{
return (a % b);
}
