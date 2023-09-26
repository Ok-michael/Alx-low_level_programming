#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _reallocator - this function reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: this is the list to be appended to
 * @size: this is the size of the new list which is always one more
 * than the old list)
 * @new: new node to add to the list
 *
 * Return: this function returns a pointer to the new list
 */
const listint_t **_reallocator(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t k;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (k = 0; k < size - 1; k++)
		newlist[k] = list[k];
	newlist[k] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - it prints prints a listint_t linked list.
 * @head: this the head pointer to the start of the list
 *
 * Return: this function return the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t k, nmb = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (k = 0; k < num; k++)
		{
			if (head == list[k])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (nmb);
			}
		}
		nmb = nmb + 1;
		list = _reallocator(list, nmb, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (nmb);
}
