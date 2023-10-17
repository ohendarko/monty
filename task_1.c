#include "monty.h"
/**
* print_top - prints top of stack
* @top: top of address
* @belt: line number
*/
void print_top(stack_t **top, unsigned int belt)
{
	stack_t *track;

	track = *top;
	if (track == NULL)
	{
		printf("L%d: can't pint, stack empty\n", belt);
		free_n_exit(top);
	}
	printf("%d\n", track->n);
}
