#include "monty.h"

/**
 * pint - prints the value at the top of the stack followed by new line
 * @head: double pointer to stack
 * @ln: line number
 *
 * Return: 0
 */
void pint(stack_t **stack, unsigned int ln)
{
    	if (!*stack)
    	{
            	fprintf(stderr, "L%d: can't pint, stack empty\n", ln);
            	exit(EXIT_FAILURE);
    	}
    	printf("%d\n", *stack->n);
}
