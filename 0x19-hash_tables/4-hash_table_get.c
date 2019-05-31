#include "hash_tables.h"


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i = 0;
	hash_node_t **tmp; 

	if (ht != NULL && key != NULL)
	{
		for(i = 0; i < (int)ht->size; i++)
		{
			if ((*tmp)->key == key)
				return (*tmp)->value;
		}
	}
	return (NULL);
}
