#include "monty.h"

/**
 * add - adds top two elements of the stack
 * @stack: pointer to top of stack
 * @line_number: current working line number
 *
 * Return: result stored in second top element of stack and top element removed
 */
void add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "add"));
		return;
	}
	(*stack)->next->next->n += (*stack)->next->n;
	pop(stack, line_number);
}
