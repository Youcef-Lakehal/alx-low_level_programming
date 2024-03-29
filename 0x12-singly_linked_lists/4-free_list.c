#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Releases the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	free_list(head->next);
	if (head->str)
		free(head->str);

	free(head);
}
