#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reallocate - this function reallocates memory for an array of
 * pointers to the nodes in a linked list
 * @list: tis is the old list to be appended
 * @size: this is the size of the new list and it is always one
 * more than the old list)
 * @new: this is the new node to add to the list
 * Return: it returns a pointer to the new list
 */
listint_t **reallocate(listint_t **list, size_t size, listint_t *new)
{
	listint_t **new_list;
	size_t q;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (q = 0; q < size - 1; q++)
		new_list[q] = list[q];
	new_list[q] = new;
	free(list);
	return (new_list);
}

/**
 * free_listint_safe - this function frees a listint_t linked list.
 * @head: this is a 2D-pointer to the start of the list
 * Return: this function returns the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t q, nmb = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (nmb);
	while (*head != NULL)
	{
		for (q = 0; q < nmb; q++)
		{
			if (*head == list[q])
			{
				*head = NULL;
				free(list);
				return (nmb);
			}
		}
		nmb = nmb + 1;
		list = reallocate(list, nmb, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (nmb);
}
