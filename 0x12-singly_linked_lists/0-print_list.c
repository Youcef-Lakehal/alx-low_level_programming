#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *cursor = h;
	size_t count = 0;

	while (cursor)
	{
		if (cursor->str)
			printf("[%d] %s\n", cursor->len, cursor->str);
		else
			printf("[0] (nil)\n");

		count++;
		cursor = cursor->next;
	}

	return (count);
}
