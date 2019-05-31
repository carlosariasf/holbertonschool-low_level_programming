#include "hash_tables.h"
/**
 *
 *
 *
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int i = 0;
	hash_node_t **tmp = ht->array; 
	

	if (ht != NULL && key != NULL)
	{
		for(i = 0; i < (int)ht->size; i++)
		{
			if ((*tmp)->key == key)
				(*tmp)->value = (char*)value;
			return (1);
		}
	}
	return (0);
}
