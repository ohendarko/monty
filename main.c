#include "monty.h"
/**
* main - main function
* @argc: argument count
* @argv: argument vector
* Return: 0
*/
int main(int argc, char **argv)
{
	stack_t *stc = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		free_n_exit(&stc);
	}
	get_bytecode(argv[1], &stc);
	free_dlistint(stc);
	return (0);
}
