#include <stdio.h>
#include "holberton.h"
unsigned long int count(unsigned long int n);
/**
* flip_bits - return number of bits to flip.
* @n: int
* @m: bits
* Return: ui
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

return (count(n ^ m));
}
/**
 * clear_bit - fuction
 * @n: int
 * Return: ui
 **/
unsigned long int count(unsigned long int n)
{
unsigned long int counter = 0;

while (n)
{
	counter = counter + (n & 1);
	n >>= 1;
}

return (counter);
}
