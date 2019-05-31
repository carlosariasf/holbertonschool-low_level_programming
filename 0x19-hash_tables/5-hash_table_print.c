#include "hash_tables.h"
/**
 * hash_table_print - Print hash table
 * @ht: hash table
**/
void hash_table_print(const hash_table_t *ht)
{

	while (ht)
	{
		printf(ht->size);
	}
}
