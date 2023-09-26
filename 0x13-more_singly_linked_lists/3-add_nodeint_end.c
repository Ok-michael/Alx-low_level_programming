#include "lists.h"

/**
 * *add_nodeint_end - this function adds a node at the end
 * of the list
 * @head: this is the head pointer
 * @n: this is the integer value to be add at the end of the
 * list
 * Return: NULL is returned if this function fails, otherwise
 * otherwise it returns a pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmpr = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (tmpr->next != NULL)
		{
			tmpr = tmpr->next;
		}
		tmpr->next = new_node;
	}
	return (new_node);
}

