/* Define the hashtable item */

typedef struct Ht_item
{
        char *key;
        char *value;
}Ht_item;

/* Define the hashtable */
typedef struct HashTable
{
        Ht_item ** items;
        int size;
        int count;
}HashTable;

Ht_item *create_item(char *key, char *value)
{
	Ht_item *item = malloc(sizeof(Ht_iemt));
	item->key = malloc(sizeof(char *) * strlen(key));
	item->value = malloc(sizeof(char *) * strlen(value));
	strcpy(item->key, key);
	strcpy(item->value, value);
	return item;
}

HashTable *create_table(int size)
{
	HashTable *table = malloc(sizeof(HashTable *));
	table->size = size;
	table->count = 0;
	table->items = calloc(table->size, sizeof(Ht_item*));

	for (int i = 0; i < table->size; i++)
	{
		table->items[i] = NULL;
	}
	return table;
}

void free_item(Ht_item* item)
{
	free(item->key);
	free(item->value);
	free(item);
}

void free_table(HashTable * table)
{
	for (int i = 0; i < table->size; i++)
	{
		Ht_item *item = table->item[i];
		if (item != NULL)
			free_item(item);
	}
	free(table->items);
	free(table);
}
}
