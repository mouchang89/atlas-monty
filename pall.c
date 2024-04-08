#include "monty.h"

/**
 * pall - prints all values on the stack starting from the top of the stack
 * @stack: double pointer to stack
 * @ln: line number
 *
 * Return: 0
 */
void pall(stack t **stack, unsigned int ln)
{
    	stack_t *tmp;

	if (stack == NULL)
    	{
            	exit(EXIT_FAILURE);
    	}
    	tmp = *stack;
    	while (tmp != NULL)
    	{
            	printf("%d\n", tmp->n);
            	tmp = tmp->next;
    	}
    	(void)ln;
}
