#include "monty.h"

/**
 * swap - swaps the topo two elements of the stack
 * @stack: double pointer to stack
 * @ln: line number
 *
 * Return: 0
 */
void swap(stack_t **stack, unsigned int ln)
{
    	stack_t *tmp;
    	int i;

    	if (!*stack || !*stack->next)
    	{
            	fprintf(stderr, "L%d: can't swap, stack too short\n", ln);
            	exit(EXIT_FAILURE);
    	}
    	tmp = *stack;
i = tmp->n;
    	tmp->n = tmp->next->n;
    	tmp->next->n = i;
}
