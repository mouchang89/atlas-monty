#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: pointer to top of stack
 * @line_number: current working line number
 * @arg: arguments
 *
 * Return: 0
 */
void push(stack_t **stack, unsigned int line_number, *arg)
{
    	stack_t *tmp = NULL;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: Error stack not found\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = malloc(sizeof(stack_t));
	if (tmp == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	tmp->n = atoi(arg);
	tmp->prev = NULL;
	tmp->next = *stack;
	if (*stack)
	{
		(*stack)->prev = node;
	}
	(*stack) = tmp;
}
