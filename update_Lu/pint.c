#include "monty.h"

/**
 * pint - Prints the value at top of the stack
 * @stack: Doubly linked list
 * @line_number: Number's line
 * Return: Nothing
 */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	tmp = *stack;

	if (*stack == NULL)
	{
		printf("L<%i>: can't pint, stack empty", line_number);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	printf("%i\n", tmp->n);
}
