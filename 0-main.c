#include"lists.h"
/**
*main-main function for operation of stacks
*@argc:number of arguments
*@argv;arguments passed, opcode and element to be added
**/
int main(int argc, char(*argv[]))
{
	stack_t **new;
	new = malloc(sizeof(stack_t));
	
	if (argc < 2)
	{
		printf("L<line_number>: usage: push integer\n");
		exit(EXIT_FAILURE);
	}
	else 
	{
		if (strcmp( argv[1], "push") == 0)
		{
			push(new, atoi(argv[2]));
		}
		printf("%d\n",(*new)->n);
		return ((*new)->n);
	}
}
