#include "lists.h"

/**
 * insert_nodeint_at_index - this function inserts a node a nth
 * position
 * @head: this is the head pointer
 * @idx: this is the index in which the node is to be inserted
 * @n: this the value to be added at  the new node
 * Return: this function returns a pointer to the new node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	listint_t *current = *head;
	listint_t *temp;
	unsigned int i;

	if (idx == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
