#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h>

/**
 * print_list - this function prints elements of a singly linked
 * list on the standard output
 * @h:  this is the linked list to be printed
 * Return: this function returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *pter = h;
	size_t nmb_nodez = 0;
	
	while (pter != NULL)
	{
		printf("[%d] %s\n", pter->len,
				pter->str != NULL ? pter->str: "(nil)");
		pter = pter->next;
		nmb_nodez++;
	}
	return (nmb_nodez);
}
