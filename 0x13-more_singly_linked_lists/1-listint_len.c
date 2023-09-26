#include "lists.h"
/**
 * listint_len - this function returns the number of elements
 * in a linked list
 * @h: this is the pointer to the head node
 * Return: this function returns the number of nodes in the
 * list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_cntr = 0;

	while (h != NULL)
	{
		node_cntr = node_cntr + 1;
		h = h->next;
	}
	return (node_cntr);
}
