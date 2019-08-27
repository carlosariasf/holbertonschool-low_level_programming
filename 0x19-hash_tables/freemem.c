#include "hash_tables.h"
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
