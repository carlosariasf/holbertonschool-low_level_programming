#include "hash_tables.h"
/**
 * hash_table_get - Get table
 * @ht: hash table
 * @key: key to return
 * Return: value
**/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i = 0;
	hash_node_t *tmp;

	i = key_index((const`unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL && tmp->key != NULL && strcmp(key, tmp->key) > 0)
		tmp = tmp->next;
	if (tmp == NULL || tmp->key == NULL || strcmp(key, tmp->key) != 0)
		return (NULL);

	else
		return (tmp->value);
}
