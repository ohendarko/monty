#include "monty.h"
/**
* delete_dnodeint_at_index - delete node
* @head: beats me
* @index: beats me
* n: beats me
* Return: sum
*/
int delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
	stack_t *current = *head;

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (index > 0)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		index--;
	}
	if (current == NULL)
		return (-1);
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
