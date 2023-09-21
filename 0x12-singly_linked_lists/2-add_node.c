#include <string.h>
#include "lists.h"

/**
 * *add_node - this function adds a node to a linked list head
 * @head: this is the linked list head
 * @str: this is the string member of the linked list
 * Return: it returns the  number of elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length;

	new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	
	length = 0;
	while(str[length] != '\0')
		length++;

	new->len = length;
	new->next = *head;
	*head = new;

	return (new);
}
