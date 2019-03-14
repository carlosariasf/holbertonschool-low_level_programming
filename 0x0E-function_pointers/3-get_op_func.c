#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - Int
 * @s: char
 *
 * Return: int
**/
int (*get_op_func(char *s))(int, int)
{
p_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

while (*s != ops[i])
	i++;
if (i == 5)
	return (NULL);

return (ops[i]);
	
