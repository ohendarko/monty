#include "monty.h"
/**
* add_top2 - removes top element
* @belt: line number
* @top: top adress
*/
void add_top2(stack_t **top, unsigned int belt)
{
	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", belt);
		exit(EXIT_FAILURE);
	}
	(*top)->next->n += (*top)->n;
	pop_offtop(top, belt);
}
