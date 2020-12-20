#include "monty.h"

void push(stack_t **stack, int val)
{
    (void) stack;
    (void) val;
    /*stack_t *temp = (*stack);
    stack_t *new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        fprintf(stdout, "Error: malloc failed\n");
    }

    new->n = val;
	new->next = temp;
	new->prev = NULL;

    if (temp != NULL)
    {
		temp->prev = new;
	    temp = new;
    }*/
    printf("Hola soy la funcion push");
}