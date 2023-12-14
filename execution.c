#include "monty.h"
/**
* execution- executes the opcode
* @stack: head linked list - stack
* @ctr: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execution(char *content, stack_t **stack, unsigned int ctr, FILE *file)
{
	unsigned int r = 0;
	char *op;
	instruction_t opst[] = {
				{"push", _push},
				{"pall", _pall},
				{"pint", _pint},
				{"queue", _queue},
				{"stack", _stack},
				{"pop", _pop},
				{NULL, NULL}
				};

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[r].opcode && op)
	{
		if (strcmp(op, opst[r].opcode) == 0)
		{	opst[r].f(stack, ctr);
			return (0);
		}
		r++;
	}
	if (op && opst[r].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", ctr, op);
		fclose(file);
		free(content);
		_free(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

