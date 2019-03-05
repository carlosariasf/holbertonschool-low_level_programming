#include "holberton.h"
#include <stdlib.h>

/**
 *
 *
 *
**/

char *create_array(unsigned int size, char c)
{
int i;
char *p;

if(size > 0)
{
p = malloc(sizeof(c) * size);
for(i = 0; i < (int)size; i++)
{
p[i] = c;
}

return(p);
}

return (0);
}
