#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - this function adds a node at the end of a linked list
 * @head: this is the character to print
 * @str: this is the string for the new node
 *
 * Return: it returns a new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pter;
	list_t *new;
	int c;

	pter = *head;
	while (pter && pter->next != NULL)
		pter = pter->next;
	c = 0;
	while (str[c] != '\0')
		c++;
	new = malloc(sizeof(list_t));
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
	new->len = c;
	new->next = NULL;

	if (pter)
		pter->next = new;
	else
		*head = new;
	return (new);
}
