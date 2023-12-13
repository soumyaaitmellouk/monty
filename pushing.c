#include "monty.h"
/**
 * _push - add node to the stack
 * @head: parameter 1.
 * @ctr: parametr 2.
 * Return: no return
*/
void _push(stack_t **head, unsigned int ctr)
{
	int n, r = 0;
	int count = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			r++;
		for (; bus.arg[r] != '\0'; r++)
		{
			if (bus.arg[r] > 57 || bus.arg[r] < 48)
				count = 1;
		}
		if (count == 1)
		{
		       	fprintf(stderr, "L%d: usage: push integer\n", ctr);
			fclose(bus.file);
			free(bus.content);
			_free(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", ctr);
		fclose(bus.file);
		free(bus.content);
		_free(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		add_head(head, n);
	else
		add_tail(head, n);
}
