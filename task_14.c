#include "monty.h"
/**
* rotbom - print char at top
* @belt: line number
* @top: top adress
*/
void rotbom(stack_t **top, __attribute__ ((unused))unsigned int belt)
{
	stack_t *track1, *track2;
	int new1, new2;

	if (*top == NULL)
		return;
	track1 = *top;
	track2 = *top;
	while (track1->next)
		track1 = track1->next;
	while (track2)
	{
		if (track2->prev == NULL)
		{
			new1 = track2->n;
			track2->n = track1->n;
		}
		else
		{
			new2 = track2->n;
			track2->n = new1;
			new1 = new2;
		}
		track2 = track2->next;
	}
}
