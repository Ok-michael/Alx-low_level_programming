#include <stdio.h>
#include "lists.h"

/**
 * print_list - this function prints elements of a linkedlist
 * @h: this is the linked list passed
 *
 * Return: this function returns the number of elements passed
 */
size_t print_list(const list_t *h)
{
	size_t nmb_nodez = 0;
	const list_t *pter = h;

	while (pter != NULL)
	{
		printf("[%d] %s\n", pter->len,
				pter->str != NULL ? pter->str : "(nil)");
		pter = pter->next;
		nmb_nodez++;
	}
	return (nmb_nodez);
}
