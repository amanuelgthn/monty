#include"monty.h"
/**
*str_split-function to split a string with a delimiter of space
*@str:string to be splitted
*Return:pointer to the splitted string
**/
char *str_split(char *str)
{
	char delim[] = " ";
	char *split = strtok(str, delim);
	
	while(split != NULL)
	{
		split = strtok(NULL, delim);
	}
	return (*split);
}
