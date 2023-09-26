#include "lists.h"

/**
 * print_listint - this function will print all the elements of a list.
 * @h: this parameter represents the head of the list to be traversed.
 * Return: this function return an integer representing the number of
 * in a list
 */
size_t print_listint(const listint_t *h)
{
	size_t nmbr_nodes = 0;

	if (h == NULL)
	{
		return (nmbr_nodes);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nmbr_nodes = nmbr_nodes + 1;
	}
	return (nmbr_nodes);
}
