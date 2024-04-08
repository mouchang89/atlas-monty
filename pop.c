#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: double pointer to stack
 * @ln: line number
*
 * Return: 0
 */
void pop(stack_t **stack, unsigned int ln)
{
    	stack_t *tmp;

    	if (!*stack)
    	{
            	fprintf(stderr, "L%d: can't pop an empty stack\n", ln);
            	exit(EXIT_FAILURE);
    	}
    	tmp = *stack;
    	*stack = *stack->next;
    	free(tmp);
}
