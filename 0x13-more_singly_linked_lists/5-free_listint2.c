#include "lists.h"

/**
 * free_listint2 - this function frees the list
 * Description: this function frees the list and points
 * the head to NULL
 * @head: this is the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmpr;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		tmpr = *head;
		*head = (*head)->next;
		free(tmpr);
	}
}
