#include"lists.h"
/**
*push-function to push an element to the stack
*@data:element to be added to the stack
**/
void push(stack_t **stack, int data)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		return (NULL);
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
	
