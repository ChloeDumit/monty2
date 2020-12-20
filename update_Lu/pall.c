#include "monty.h"
/**
 * pall - Prints All values on stack from top down
 * @stack: Struct stack_s as stack_t **ptr
 * @line_number: File line number
 * Return: Nothing (void)
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = (*stack);
	(void)line_number;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
	}
}
