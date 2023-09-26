#include "lists.h"

/**
 * get_nodeint_at_index - this function returns the node at the nth
 * position
 * @head: this is the head pointer to the last node of the list
 * @index: this is the index of the node to be be returned
 * Return: this function returns a node to the nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        listint_t *tmpr;

        if (head == NULL)
        {
                return (0);
        }
        tmpr = head;
        while(index)
        {
                tmpr = tmpr->next;
                index--;
                if (tmpr == NULL)
                {
                        return (0);
                }
        }
        return (tmpr);
}
