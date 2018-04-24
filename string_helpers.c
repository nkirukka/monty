#include "monty.h"

/**
 * tokenizer - tokenize line from file
 * @line: line from file
 * @line_number: line number
 *
 * Return: 0 if success, 1 if failure
 */

int tokenizer(char *line, unsigned int line_number)
{
	char delim[2] = "\n ";
	char *token;

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
