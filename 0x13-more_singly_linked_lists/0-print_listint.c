#include "lists.h"

/**
 * print_listint - this function will print all the elements of a list.
 * @h: this parameter represents the head of the list to be traversed.
 * Return: this function return an integer representing the number of
 * in a list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_cntr = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		node_cntr++;
	}
	return (node_cntr);
}
