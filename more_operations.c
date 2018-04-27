#include "monty.h"

/**
 * nop_func - implement the nop function
 * @stack: stack
 * @line_number: line number
 */
void nop_func(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}

/**
 * add_func - adds the values of the top two nodes
 * @stack: stack
 * @line_number: line number
 */

void add_func(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	int sum = 0;

	temp = *stack;
	if (temp == NULL || temp->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = temp->n + temp->next->n;
	temp->next->n = sum;

	pop_func(stack, line_number);
}
