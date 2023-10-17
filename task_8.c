#include "monty.h"
/**
* multiply - removes top element
* @belt: line number
* @top: top adress
*/
void multiply(stack_t **top, unsigned int belt)
{
	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", belt);
		exit(EXIT_FAILURE);
	}
	(*top)->next->n *= (*top)->n;
	pop_offtop(top, belt);
}
