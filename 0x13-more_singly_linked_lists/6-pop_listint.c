

#include "lists.h"

/**
 * pop_listint - function to delete the head node of a linked list
 * @head: head of the linked list
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
