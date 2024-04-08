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
		fprintf(stderr, "L%d: L<line_number>: usage: push integer\n", ln)
		exit(EXIT_FAILURE);
	}
	if (head == NULL)
	{
		head = *new_node;
		return;
	}
	tmp = atoi(*stack);
	tmp = head;
	head = *new_node;
	head->next = tmp;
	tmp->prev = head;
}

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
