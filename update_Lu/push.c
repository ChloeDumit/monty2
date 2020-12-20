#include "monty.h"

/**
 * push - Push an element into a linked list
 * @stack: Doubly linked list
 * @val: Value to be pushed into a linked list
 *
 */

void push(stack_t **stack, int val)
{
    stack_t *temp = (*stack);
    stack_t *new = malloc(sizeof(stack_t));

    if (new == NULL)
    {
        fprintf(stdout, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
    }

    new->n = val;

    if (*stack == NULL)
    {
    new->next = NULL;
    new->prev = NULL;
    *stack = new;
    }
    else
    {
	   while (temp->next != NULL)
	   {
	    temp = temp->next;
	    new->prev = temp;
	    new->next = NULL;
	    temp->next = new;
	   }
    }
}
