#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 *
 * @key: the given key of the data to be stored
 * @size: the size of the hash table
 *
 * Return: the index of the hash table to be used
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
