#include "main.h"

/**
 * read_line - reads the input string passed to the shell
 * 
 * @i_eof: return value of getline function
 * Return: the expected return for the input string
*/
char *read_line(int *i_eof)
{
    char *input = NULL;
    size_t bufsize = 0;

    *i_eof = getline(&input, &bufsize, stdin);

    return (input);
}