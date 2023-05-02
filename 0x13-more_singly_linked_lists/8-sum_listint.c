#include "lists.h"

/**
 * sum_listint - sums up all the data in a linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of the numbers
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
