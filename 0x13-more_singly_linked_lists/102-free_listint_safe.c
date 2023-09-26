#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _reallocator - this function reallocates memory for an array of
 * pointers to the nodes in a SLL
 * @list: this is the list to be appended to
 * @size: this is the size of the new list which is always one more
 * than the old list
 * @new: this is the new node to add to the list
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **new_list;
	size_t k;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (k = 0; k < size - 1; k++)
		new_list[k] = list[k];
	new_list[k] = new;
	free(list);
	return (new_list);
}

/**
 * free_listint_safe - this function frees a listint_t
 * linked list.
 * @head: this is a double pointer to the start of the list
 * Return: this funtion returns the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t k, nmb = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (nmb);
	while (*head != NULL)
	{
		for (k = 0; k < nmb; k++)
		{
			if (*head == list[k])
			{
				*head = NULL;
				free(list);
				return (nmb);
			}
		}
		nmb = nmb + 1;
		list = _reallocator(list, nmb, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (nmb);
}
