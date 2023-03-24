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
			exit(EXIT_FAILURE);
		}
		while ((read = getline(&line, &len, file)) != -1)
		{
			printf("Retrieved line of length %lu :\n", read);
			printf("%s\n", line);
			split_line = str_split(line,0);
			printf("%s\n",split_line[0]);
		}
		free(line);
	}
	return (0);
}
