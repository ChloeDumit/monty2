#include "monty.h"

/**
 * pop - Pop an element into a linked list
 * @stack: Doubly linked list
 * @line_number: Number of line
 * Return: Nothing
 */

void pop_opc(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

        if (!stack)
	{
		printf("L<line_number>: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
        }
	else
	{
		while (tmp != NULL)
		{
			if (tmp->next == NULL)
			{
				if (tmp->prev == NULL)
				{
					*stack = NULL;
				}
				else
				{
					(tmp->prev)->next = NULL;
				}
			}
			tmp = tmp->next;
		}
	}
}
