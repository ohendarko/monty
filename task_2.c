#include "monty.h"
/**
* pop_offtop - removes top element
* @belt: line number
* @top: top adress
*/
void pop_offtop(stack_t **top, unsigned int belt)
{
	if (*top == NULL)
	{
		printf("L%d: can't pop an empty stack", belt);
		free_n_exit(top);
	}
	delete_dnodeint_at_index(top, 0);
}
