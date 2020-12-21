#include "monty.h"

/**
 * swap - Swap the two top element of stack
 * @stack: Doubly linked list
 * @line_number: Line's number
 * Return: Nothing
 */

void swap_opc(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1 = *stack, *temp2 = *stack;
	int i = 0, ii = 0;

	while (temp1)
	{
		i++;
		temp1 = temp1->next;
	}
	while (ii < i)
	{
		tmp2 = tmp2->next;
	}
	temp1->next = temp1->prev;
	temp1->prev = temp2->prev;
	temp2->prev = temp2->next;
	temp2->next = NULL;
}
