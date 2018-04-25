#include "monty.h"

/**
 * get_tokens - get tokens from line
 * @line: line from file
 * @line_number: line number
 *
 * Return: int
 */

int get_tokens(char *line, unsigned int line_number)
{
	char delim[2] = "\n ";
	char *token = NULL;

	printf("line number %d\n", (int)line_number);
	token = strtok(line, delim);
	printf("first token: %s\n", token);
	while (token != NULL)
	{
		printf("token: %s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
