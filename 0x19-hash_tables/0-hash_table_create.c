#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size);
{
    hash_table_t ntable = malloc(sizeof(hash_table_t) * size);

    if (ntable == NULL)
        return NULL

    return (ntable);
}
