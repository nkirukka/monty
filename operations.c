#include "monty.h"
/**
 * get_op - matches opcode from input to existing opcode in struct
 * @ch: character to check
 * Return: the pointer to the appropriate function or NULL if nothing matches
 */
void (*get_func(char *op))(stack_t, unsigned int)
{
	instruction_t find_op[] = {
		{"push", push_func},
		{"pall, pall_func},
		{NULL, NULL}
	};
	int index;

	index = 0;
	while (find_op[index].opcode != NULL)
	{
		if (strcmp(find_op[index].opcode, op))
			print_op[index].func;
		else
		{
			print("L<%d>: unknown instruction <%s>\n", line_number, op);
			exit(EXIT_FAILURE);		
		}
		index++;
	}
}
