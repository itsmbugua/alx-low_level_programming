#include "lists.h"

/**
 * pop_listint -  deletes the head node
 * @head: pointer to the first node
 *
 * Return: always 0
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *current, *next;

	if (!*head)
		return (0);

	current = *head;
	value = current->n;
	next = current->next;

	free(current);
	*head = next;

	return (value);
}
