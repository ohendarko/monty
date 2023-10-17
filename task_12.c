#include "monty.h"
/**
* p_trtop - print char at top
* @belt: line number
* @top: top adress
*/
void p_trtop(stack_t **top, __attribute__ ((unused))unsigned int belt)
{
	stack_t *track;
	int j;

	track = *top;

	while (track != NULL)
	{
		j = track->n;
		if (j == 0)
			break;
		if (!isprint(j))
			break;
		putchar(j);
		track = track->next;
	}
	putchar('\n');
}
