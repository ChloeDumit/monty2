#include "monty.h"

/**
 * nop - doesnt do anything.
 * @stack: Struct stack_s as stack_t **ptr
 * @line_number: File line number
 * Return: Nothing (void)
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) (*stack);
	(void) line_number;
}
