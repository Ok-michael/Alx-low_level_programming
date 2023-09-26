#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - this function deletes a node at a given position.
 * @head: head to the linked list
 * @index: this is the index to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
        listint_t *current;
        listint_t *tmpr;

        if (head == NULL || (*head) == NULL)
                return (-1);

        current = *head;
        if (index == 0)
        {
                if ((*head)->next)
                        (*head) = (*head)->next;
                else
                        (*head) = NULL;
                free(current);
                return (1);
        }

        while (index != 1)
        {
                if (current->next == NULL)
                        return (-1);

                current = current->next;
                --index;
        }
        tmpr = current->next;
        if (current->next->next)
                current->next = current->next->next;
        else
                current->next = NULL;
        free(tmpr);

        return (1);
}
