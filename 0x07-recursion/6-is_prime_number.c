#include "holberton.h"
/**
 * prime_number - reset
 * @o: int
 * @ : int
 * Return: 0
**/

float prime_number(float o)
{
if ((int)o == 2)
{
	return (1);
}
if ((int)(1 / (o - (int)o)) % (int)o == 0)
{
return (0);
}
if (o / (int)o == 1)
{
return (prime_number(o - 1 + 1 / o));
}
return (prime_number(o - 1));
}
/**
 * is_prime_number - reset
 * @n: int
 * @ : int
 * Return: 0
**/
int is_prime_number(int n)
{
if (prime_number(n) == 1)
{
return (1);
}
else
{
return (0);
}

}
