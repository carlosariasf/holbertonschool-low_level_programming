#include "hash_tables.h"
/**
 * hash_table_set - Add new value to hash table
 * @ht: hash table
 * @key: Key to find
 * @value: Value to add
 * Return: 1 or 0
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx = 0;
	hash_node_t *npa = NULL, *next = NULL, *last = NULL;

	idx = key_index((const unsigned char *)key, ht->size);
	next = ht->array[idx];
	while (next != NULL && next->key != NULL && strcmp(key, next->key) > 0)
	{
		last = next;
		next = next->next;
	}
	if (next != NULL && next->key != NULL && strcmp(key, next->key) == 0)
	{

		free(next->value);
		next->value = strdup(value);
		return (1);
	}
	else
	{
		npa = ht_npa(key, value);
		if (next == ht->array[idx])
		{
			npa->next = next;
			ht->array[idx] = npa;
			return (1);
		}
		else if (next == NULL)
		{
			last->next = npa;
			return (1);
		}
		else
		{
			npa->next = next;
			last->next = npa;
			return (1);
		}
	}
	return (0);
}
/**
 * *ht_npa - Add new value to hash table
 * @key: hash table
 * @value: Key to find
 * Return: New hash node
**/
hash_node_t *ht_npa(const char *key, const char *value)
{
	hash_node_t *newpair;

	newpair = malloc(sizeof(hash_node_t));
	if (newpair == NULL)
		return (NULL);
	newpair->key = strdup(key);
	if (newpair->key == NULL)
		return (NULL);
	newpair->value = strdup(value);
	if (newpair->value == NULL)
		return (NULL);
	newpair->next = NULL;

	return (newpair);
}
