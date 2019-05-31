#include "hash_tables.h"
/**
 *
 *
 *
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx = 0;
	hash_node_t *npa = NULL;
	hash_node_t *next = NULL;
	hash_node_t *last = NULL;
	
	idx = key_index((const unsigned char*)key, ht->size);
	next = ht->array[idx];

	while(next != NULL && next->key != NULL && strcmp(key, next->key) > 0)
	{
		last = next;
		next = next->next;
	}
	if( next != NULL && next->key != NULL && strcmp(key, next->key) == 0 ) {

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

hash_node_t *ht_npa(const char *key, const char *value)
{
	hash_node_t *newpair;

	if ((newpair = malloc(sizeof(hash_node_t))) == NULL)
		return NULL;
	if ((newpair->key = strdup(key)) == NULL)
		return NULL;
	if ((newpair->value = strdup(value)) == NULL)
		return NULL;
	newpair->next = NULL;

	return newpair;
}
