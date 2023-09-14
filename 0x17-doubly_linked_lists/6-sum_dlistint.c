#include "lists.h"

/**
 * sum_dlistint - return the sum of the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: the sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
