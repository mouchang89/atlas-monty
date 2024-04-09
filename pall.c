#include "monty.h"

/**
 * pall - prints all values on the stack starting from the top of the stack
 * @stack: pointer to top of stack
 * @line_number: current working line number
 *
 * Return: 0
 */
void pall(stack_t **stack, unsigned int line_number)
{
    	stack_t *tmp = (*stack)->next;

	while (tmp)
    	{
            	printf("%d\n", tmp->n);
            	tmp = tmp->next;
    	}
    	(void)line_number;
}
