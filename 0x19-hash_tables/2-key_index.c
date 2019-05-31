#include "hash_tables.h"
/**
 * key_index - Return key index
 * @key: key to find
 * @size: Size of table
 * Return: Index of key
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
