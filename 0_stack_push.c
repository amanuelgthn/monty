#include"monty.h"
/**
*push-function to push an element to the stack
*@data:element to be added to the stack
**/
void push(stack_t **stack, unsigned int data)
{
	stack_t *new;
	(void)line_number;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = data;
	new->next = *(stack);
	new->prev = NULL;
	if ((*stack) != NULL)
	{
		(*stack)->prev = new;
	}
	(*stack) = new;
}
