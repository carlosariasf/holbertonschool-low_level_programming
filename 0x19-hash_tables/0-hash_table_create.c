#include "hash_tables.h"
/**
 * hash_table_create - Function to create hash table
 * @size: Size of table
 * Return: New table or NUll
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *htable = NULL;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);
	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}
	htable->size = size;
	for (i = 0; i < size; i++)
		htable->array[i] = NULL;

	return (htable);
}
/**
 *
 *
 *
 *
**/
void freememo(const hash_table_t *ht)
{
        unsigned long int i;

        for (i = 0; i < ht->size; i++)
                free(ht->array[i]);
}
