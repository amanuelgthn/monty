#include"lists.h"
/**
*main-main function for operation of stacks
*@argc:number of arguments
*@argv;arguments passed, opcode and element to be added
**/
int main(int argc, char(*argv[]))
{
	stack_t *new;
	new = NULL;
	
	if (argc < 3 || (argc == 3 && isdigit(atoi(argv[2]) == 0)))
	{
		printf("L<line_number>: usage: push integer\n");
		exit(EXIT_FAILURE);
	}
	else 
	{
		if (argv[1] == "push")
		{
			push(new, atoi(argv[2]));
		}
		return (new->n);
	}
}
