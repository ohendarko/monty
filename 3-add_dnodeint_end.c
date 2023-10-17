#include "monty.h"
/**
* add_dnodeint_end - print all list elements
* @head: beats me
* @n: beats me
* Return: new node
*/
stack_t *add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *t, *temp = malloc(sizeof(stack_t));

	if (head == NULL)
		return (NULL);
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;
		t->next = temp;
		temp->prev = t;
	}
	return (temp);
}
