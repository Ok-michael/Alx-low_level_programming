#include "lists.h"

/**
 * insert_nodeint_at_index - this function inserts a node a nth
 * position
 * @head: this is the head pointer
 * @idx: this is the index in which the node is to be inserted
 * @n: this the value to be added at  the new node
 * Return: this function returns a pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmpr;
	listint_t *new_node;

	if (*head == NULL)
	{
		return (0);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node = NULL;
	new_node->n = n;

	if (!idx)
	{
		new_node->next = **head;
		(*head) = new_node;
		return (new_node);
	}
	tmpr = *head;
	while (idx != 1)
	{
		tmpr = tmpr->next;
		--idx;
		if (tmpr == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = tmpr->next;
	tmpr->next = new_node;
	return (new_node);
}
