#include "hash_tables.h"
/**
 * hash_table_delete - Delete table
 * @ht: Hash table
**/
void hash_table_delete(hash_table_t *ht)
{
	while (ht)
	{
		free(ht);
		ht->next;
	}
}
