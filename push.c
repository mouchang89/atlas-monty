#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: double pointer to stack
 * @ln: line number
 *
 * Return: 0
 */
void push(stack_t **stack, unsigned int ln)
{
    	stack_t *tmp;

    	if (stack == NULL || *stack == NULL)
    	{
            	fprintf(stderr, "L%d: L<line_number>: usage: push integer\n", ln);
            	exit(EXIT_FAILURE);
    	}
    	tmp = atoi(stack);
    	tmp = head;
    	head = *new_node;
    	head->next = tmp;
    	tmp->prev = head;
}
