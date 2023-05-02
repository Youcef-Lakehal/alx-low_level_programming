#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a linked list
 * @head: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cursor = head;
	listint_t *temp;
	size_t count = 0;

	while (cursor != NULL)
	{
		if (cursor <= cursor->next)
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
			count++;
			cursor = cursor->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)cursor->next, cursor->next->n);
			count++;
			temp = cursor->next;
			cursor->next = NULL;
			cursor = temp;
		}
	}
	return (count);
}
