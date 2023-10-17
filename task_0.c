#include "monty.h"
/**
* push_to_stack - add element to top of stack
* @top: monty list
* @belt: opcode line
*/
void push_to_stack(stack_t **top, unsigned int belt)
{
	int qors = 0;
	stack_t *temp;
	char *push_args;
	int parsed_arg;

	parsed_arg = 0;
	temp = malloc(sizeof(stack_t));
	if (!temp)
	{
		printf("malloc fail\n");
		free_n_exit(top);
	}
	push_args = strtok(NULL, "\n");
	if (check_ifnum(push_args) == 1 && push_args != NULL)
		parsed_arg = atoi(push_args);
	else
	{
		printf("L%d: usage: push integer\n", belt);
		free_n_exit(top);
	}
	if (qors == 1)
		add_dnodeint_end(top, parsed_arg);
	if (qors == 0)
		add_dnodeint(top, parsed_arg);
	free(temp);
}

/**
* prin_al - print all stack values
* @top: stack address
* @belt: opcode line
*/
void prin_al(stack_t **top, __attribute__ ((unused))unsigned int belt)
{
	stack_t *track;

	track = *top;
	while (track != NULL)
	{
		printf("%d\n", track->n);
		track = track->next;
	}
}
