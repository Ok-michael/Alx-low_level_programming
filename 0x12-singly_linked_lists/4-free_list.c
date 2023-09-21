#include "lists.h"

/**
 * free_list - this function frees a list_t list
 * @head: head of linked list to be freed
 */
void free_list(list_t *head)
{
	list_t *pter;
	list_t *nxt;

	pter = head;
	while (current != NULL)
	{
		nxt = pter->next;
		free(pter->str);
		free(pter);
		pter = nxt;
	}
}
