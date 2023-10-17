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
		fprintf(stderr, "L%d: can't pop an empty stack\n", belt);
		exit(EXIT_FAILURE);
	}
	delete_dnodeint_at_index(top, 0);
}
