#include "lists.h"

/**
 * pop_listin - this function deletes the last node of a listint_t
 * linked list
 * @head: this is the head of the linked list
 * Return: this function returns the head pointing to the the node
 * at nth position
 */
int pop_listint(listint_t **head)
{
        listint_t *tmpr;
        int k;

        if (head == NULL)
        {
                return (0);
        }
        tmpr = *head;
        if (tmpr == NULL)
        {
                return (0);
        }
        k = tmpr->n;
        *head = tmpr->next;
        free(tmpr);
        return (k);
}
