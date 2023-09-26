#include "lists.h"
/**
 * *reverse_listint - this function reverse the orde of the node
 * @head: this is the head pointer
 * Return: this function returns the head pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fward;
	listint_t *bward = NULL;

	if (head  == NULL)
		return (NULL);
	fward = *head;
	while (fward != NULL)
	{
		fward = fward->next;
		fward = (*head)->next;
		(*head)->next = bward;
		bward = *head;
		*head = fward;
	}
	*head = bward;
	return (*head);
}
