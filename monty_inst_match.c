#include "monty.h"
/**
* monty_match - figure out what the command(opcode)
* in the monty code means
* @s: the command/ opcode
* Return: what it returns
*/
instruct_func monty_match(char *s)
{
	int n = 0;

	instruction_t match[] = {
		{"push", push_to_stack},
		{"pall", prin_al}
	};

	while (match[n].f != NULL && strcmp(match[n].opcode, s) != 0)
	{
		n++;
	}
	return (match[n].f);
}
