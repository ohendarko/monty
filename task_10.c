#include "monty.h"
/**
* p_atop - print char at top
* @belt: line number
* @top: top adress
*/
void p_atop(stack_t **top, unsigned int belt)
{
	stack_t *track;
	int j;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", belt);
		exit(EXIT_FAILURE);
	}

	track = *top;
	j = track->n;

	if (!isprint(j))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", belt);
		exit(EXIT_FAILURE);
	}
	putchar(j);
	putchar('\n');
}
