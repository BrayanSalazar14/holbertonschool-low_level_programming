#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
  hash_node_t *tmp;
  unsigned long int i;
  
  if (ht == NULL)
    return;

  printf("{");
  for (i = 0; i < ht->size; i++)
  {
    tmp = ht->array[i];
    while (tmp)
    {
      printf("'%s': '%s'\n", tmp->key, tmp->value);
      tmp = tmp->next;

      if (tmp != NULL)
	      printf (", ");
    }
  }
  printf("}\n");
}
