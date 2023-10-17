#include "monty.h"
/**
* p_trtop - print char at top
* @belt: line number
* @top: top adress
*/
void rotate(stack_t **top, __attribute__ ((unused))unsigned int belt)
{
	stack_t *track;
	int new1, new2;

	if (*top == NULL)
		return;
	track = *top;
	while (track->next)
		track = track->next;
	while (track)
	{
		if (!track->next)
		{
			new1 = track->n;
			track->n = (*top)->n;
		}
		else
		{
			new2 = track->n;
			track->n = new1;
			new1 = new2;
		}
		track = track->prev;
	}
}
