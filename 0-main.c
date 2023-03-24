#include"monty.h"
/**
*main-main function for operation of stacks
*@argc:number of arguments
*@argv;arguments passed, opcode and element to be added
**/
int main(int argc, char(*argv[]))
{
	FILE *file;
	char *line = NULL;
	char **split_line;
	size_t len = 0;
	ssize_t read;
	int words = 0;
	stack_t *new = NULL;
	new = malloc(sizeof(stack_t));
	
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
			exit(EXIT_FAILURE);
		}
		while ((read = getline(&line, &len, file)) != -1)
		{
			split_line = str_split(line,&words);
			if(strcmp(split_line[0], "push") == 0)
			{
				push(&new,atoi(split_line[1]));
				printf("%d\n",atoi(split_line[1]));
			}
			if(strcmp(split_line[0], "pall") == 0)
			{
				pall(new);
			}
		}
		free(line);
	}
	return (0);
}
