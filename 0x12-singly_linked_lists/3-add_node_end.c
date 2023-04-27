#include "lists.h"

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @str: string to be used as content of the newly added node
 *
 * Return: address of the newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *cursor;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	cursor = *head;
	while (cursor->next)
		cursor = cursor->next;

	cursor->next = new_node;
	return (new_node);
}

/**
 * _strlen - counts the length of a string
 * @str: string to be counted
 *
 * Return: the length of the string
 */
int _strlen(const char *str)
{
	int len = 0;

	if (!str)
		return (len);

	while (str[len])
		len++;

	return (len);
}
