#include <stdio.h>
#include "monty.h"
/**
* opcode_proc - function to parse opcode/args
* @belt: line for parsing
* Return: what you have to
*/
char *opcode_proc(char *belt)
{
	char *opcode;

	opcode = strtok(belt, "\n ");
	if (opcode == NULL)
		return (NULL);
	return (opcode);
}

/**
* get_bytecode - function name
* @lfname: filepath
* @top: top of stack address
*/
void get_bytecode(char *lfname, stack_t **top)
{
	char buffer[1024], *line;
	int line_len = 0, line_count = 1, eof;
	instruct_func s;
	FILE *file = fopen(lfname, "r");

	if (file == NULL)
	{
		fprintf(stderr, "USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, sizeof(buffer), file))
	{
		line_len = strlen(buffer);
		if (buffer[line_len - 1] == '\n')
			buffer[line_len - 1] = '\0';

		line = opcode_proc(buffer);

		if (line == NULL || line[0] == '#')
		{
			line_count++;
			continue;
		}

		s = monty_match(line);
		if (s == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_count, line);
			exit(EXIT_FAILURE);
		}
		s(top, line_count);
		line_count++;
	}

	eof = fclose(file);
	if (eof == EOF)
		exit(-1);
}
