#include "monty.h"

/**
 * pint - prints the value at the top of the stack followed by new line
 * @stack: pointer to top of stack
 * @line_number: current working line number
 *
 * Return: 0
 */
void pint(stack_t **stack, unsigned int line_number)
{
    	if ((*stack)->next == NULL)
    	{
		set_op_tok_error(pint_error(line_number));
		return;
	}
	printf("%d\n, (*stack)->next->n);
}
