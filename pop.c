#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: pointer to top of stack
 * @line_number: current working line number
*
 * Return: 0
 */
void pop(stack_t **stack, unsigned int ln)
{
    	stack_t *next = NULL;

    	if ((*stack)->next == NULL)
    	{
		set_op_tok_error(pop_error(line_number));
		return;
    	}
	next = (*stack)->next->next;
	free((*stack)->next);
	if (next)
	{
		next->prev = *stack;
	}
	(*stack)->next = next;
}
