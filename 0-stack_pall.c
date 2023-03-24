#include"lists.h"
/**
*print_dlistint-print all elemensts in a doubly linked list
*@h:a doubly linked list to be printed
*Return: the number of nodes or elements in the doubly linked list
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
