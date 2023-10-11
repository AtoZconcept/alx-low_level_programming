#include "hash_tables.h"

/**
 * hash_table_print - print ordered key:values of hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	char *comma = "";
	hash_node_t *node;
	unsigned long int idx = 0;

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (idx < ht->size)
	{
		node = ((ht->array)[idx]);
		while (node)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		idx++;
	}
	putchar('}');
	putchar('\n');
}
