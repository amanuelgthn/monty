#include"monty.h"
/**
*str_split-function to split a string with a delimiter of space
*@str:string to be splitted
*Return:pointer to the splitted string
**/
char **str_split(char *str, int *number_of_words)
{
    char *piece, **str_arr = NULL, *str_cpy = NULL;
    int i = 0;

    if (str == NULL)
    {
        return (NULL);
    }
    str_cpy = strdup (str);
    piece = strtok(str_cpy, " ");
    while (piece != NULL)
    {
        if ((*piece) == '\n')
        {
            piece = strtok(NULL, " ");
            continue;
        }
        (*number_of_words)++;
        piece = strtok(NULL, " ");
    }

    str_arr = (char **)malloc(sizeof(char *) * (*number_of_words));
    piece = strtok(str, " ");
    for (i = 0; piece != NULL; i++)
    {
        if ((*piece) == '\n')
        {
            piece = strtok(NULL, " ");
            continue;
        }
        str_arr[i] = (char *)malloc(sizeof(char) * (strlen(piece) + 1));
        strcpy(str_arr[i], piece);
        piece = strtok(NULL, " ");
    }

    if (str_cpy)
        free (str_cpy);

    return (str_arr);
}
