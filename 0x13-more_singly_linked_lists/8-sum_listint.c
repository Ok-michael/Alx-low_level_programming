#include "lists.h"

/**
 * sum_listint - this function returns the sum of all the entries of
 * a listint_t linked list
 * @head: this is the head pointer to the last entry of the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmpr;

	if (head == NULL)
	{
		return (0);
	}
	tmpr = head;
	while (tmpr)
	{
		sum += tmpr->n;
		tmpr = tmpr->next;
	}
	return (sum);
}
