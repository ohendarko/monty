#include "monty.h"
/**
* swap_fnsec - swap top and second elements
* @belt: line number
* @top: top adress
*/
void swap_fnsec(stack_t **top, unsigned int belt)
{
	stack_t *track;
	int j;

	track = *top;

	if (track == NULL || track->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short", belt);
		exit(EXIT_FAILURE);
	}
	j = track->n;
	track->n = track->next->n;
	track->next->n = j;
}
