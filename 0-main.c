#include"lists.h"
/**
*main-main function for operation of stacks
*@argc:number of arguments
*@argv;arguments passed, opcode and element to be added
**/
int main(int argc, char(*argv[]))
{
	FILE *file;
	/**stack_t **new;
	new = malloc(sizeof(stack_t));**/
	
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		if(fopen(argv[1], "r"))
		{
			file = fopen(argv[1], "r");
		}
		else
		{
			printf("Error: Can't open file %s",argv[1]);
		}
	}
	return (0);
}
