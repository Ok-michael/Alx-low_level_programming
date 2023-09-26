<<<<<<< HEAD
fndef LISTS_H
=======
#ifndef LISTS_H
>>>>>>> 017a615aa7e285a5781823ee540dbc81deea7baa
#define LISTS_H

#include <stdlib.h>
/**
<<<<<<< HEAD
 *  * struct list_s - singly linked list
 *   * @str: string - (malloc'ed string)
 *    * @len: length of the string
 *     * @next: points to the next node
 *      *
 *       * Description: singly linked list node structure
 *        */
typedef struct list_s
{
		char *str;
			unsigned int len;
				strguct list_s *next;
=======
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
>>>>>>> 017a615aa7e285a5781823ee540dbc81deea7baa
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

<<<<<<< HEAD
=======

>>>>>>> 017a615aa7e285a5781823ee540dbc81deea7baa
#endif
