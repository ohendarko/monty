#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

extern int qors;
/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


typedef void (*instruct_func)(stack_t **stack, unsigned int line_number);
stack_t *add_dnodeint_end(stack_t **head, const int n);
stack_t *add_dnodeint(stack_t **head, const int n);
void free_dlistint(stack_t *head);
void get_bytecode(char *lfname, stack_t **top);
char *opcode_proc(char *belt);
void free_n_exit(stack_t **stc);
int main(int argc, char **argv);
int check_ifnum(char *s);
void push_to_stack(stack_t **top, unsigned int belt);
void prin_al(stack_t **top, __attribute__ ((unused))unsigned int belt);
instruct_func monty_match(char *s);
void print_top(stack_t **top, unsigned int belt);

#endif
