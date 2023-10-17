#include "monty.h"
/**
* add_dnodeint - add node at start of list
* @head: beats me
* @n: beats me
* Return: new node
*/
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *temp = malloc(sizeof(stack_t));

	if (head == NULL)
		return (NULL);
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;

	if (*head != NULL)
		(*head)->prev = temp;

	*head = temp;
	return (temp);
}
