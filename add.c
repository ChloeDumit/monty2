#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @stack: head of stack
 * @line_number: current line number in file
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (dlistint_len(*stack) < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		(*stack)->next->n = (*stack)->n + (*stack)->next->n;
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
	}



/**
 * dlistint_len - returns the number of elements in a linstint.
 * @h: h
 * Return: Always 0.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
