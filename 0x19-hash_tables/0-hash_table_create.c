#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *hnode = malloc(sizeof(hash_node_t) * size);
	hash_table_t *htable = malloc(sizeof(hash_table_t));
        
	if (hnode == NULL)
                return (NULL);
	if (htable == NULL)
		return (NULL);
	htable->size = size;
	htable->array = &hnode;

	return (htable);
}
