#include "lists.h"

/**
 * sum_listint - Function that sum lists
 * @head: head nodo
 *
 * Return: suma
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
