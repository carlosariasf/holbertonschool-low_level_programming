#include "holberton.h"
/**
 * _abs - Init function
 * @r: Description of parameter r
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */
int _abs(int r)
{
	if (r <= 0)
	{
		r = r * -1;
		return (r);
	}
	else
	{
		r = r * 1;
		return (r);
	}

return (0);
}
