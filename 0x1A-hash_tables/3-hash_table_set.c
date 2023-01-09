#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: element key
 * @value: element value
 * Return: 1 on Success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	char *sp;

	if ((char *)value == NULL)
		return (0);
	if (ht == NULL)
		return (0);
	if ((char *)key == NULL)
		return (0);
	if (*key == '\0')
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	sp = strdup(key);
	if (sp == NULL)
		return (1);
	node->key = sp;
	index = key_index((unsigned char *)key, ht->size);
	if (node->value != NULL)
		free(node->value);
	sp = strdup(value);
	if (sp == NULL)
		return (1);
	node->value = sp;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
