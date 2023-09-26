#include "lists.h"

/**
 * add_nodeint - this function adds a  node at the
 * beginning of the list
 * head: this is the head pointer
 * @n: this parameter is the integer part of the node
 * to be added
 * Return: this function returns a null  if it fails
 * or an address to the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *new_node

        new_node = malloc(sizeof(listint_t));
        if(new_node == NULL)
                return (NULL);
        new_node->next = *head;
        new_node->n = n;
        *head = new_node;
        return (new_node);
}
