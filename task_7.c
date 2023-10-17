#include "monty.h"
/**
* divide - removes top element
* @belt: line number
* @top: top adress
*/
void divide(stack_t **top, unsigned int belt)
{
	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", belt);
		exit(EXIT_FAILURE);
	}
	if((*top)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", belt);
		exit(EXIT_FAILURE);
	}
	(*top)->next->n /= (*top)->n;
	pop_offtop(top, belt);
}
