#include "hash_tables.h"
/**
 * hash_table_print - Print hash table
 * @ht: hash table
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count = 0;
	hash_node_t *tmp = NULL;

	while (tmp && count < ht->size)
	{
		tmp = ht->array[count];
		if (tmp != NULL && tmp->key != NULL)
			printf("%s:%s\n", tmp->key, tmp->value);
		tmp = tmp->next;
		count ++;
	}
}
