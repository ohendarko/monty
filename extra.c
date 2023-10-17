#include "monty.h"
/**
* free_n_exit - free and exit error
* @stc: stack head address
*/
void free_n_exit(stack_t **stc)
{
	if (*stc)
		free_dlistint(*stc);
	exit(EXIT_FAILURE);
}
/**
* check_ifnum - check if s is a number
* @s: argument passed
* Return: 1
*/
int check_ifnum(char *s)
{
	unsigned int n = 0;

	if (s == NULL)
		return (0);
	while (s[n])
	{
		if (s[0] == '-')
		{
			n++;
			continue;
		}
		if (!isdigit(s[n]))
			return (0);
		n++;
	}
	return (1);
}
