#include "monty.h"

/**
 * get_tokens - get tokens from line
 * @line: line from file
 * @line_number: line number
 *
 * Return: int
 */

char * get_tokens(char *line, unsigned int line_number)
{
	char delim[2] = "\n ";
	char *token = NULL;
	char *holder = NULL;

	printf("line number %d\n", (int)line_number);
	token = strtok(line, delim);
	printf("first token: %s\n", token);
	if (token == NULL)
		return (NULL);
	holder = strtok(NULL, delim);
	if (holder != NULL)
		global_var = atoi(holder);
	/*printf("second token (global var) %d\n", global_var);*/
	return (token);
}
