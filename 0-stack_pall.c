#include"monty.h"
/**
*pall-print all elemensts in a doubly linked list
*@stack:a doubly linked list to be printed
**/
void pall(stack_t *stack)
{
	int n = 0;
	stack_t *ptr = stack;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
