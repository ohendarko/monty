#include "monty.h"
/**
* free_dlistint - free list
* @head: beats me
* n: beats me
* Return: new node
*/
void free_dlistint(stack_t *head)
{
	stack_t *curr, *t;

	curr = head;
	while (curr != NULL)
	{
		t = curr->next;
		free(curr);
		curr = t;
	}
}
