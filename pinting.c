#include "monty.h"
/**
 * _pint - prints the top
 * @head: stack head
 * @ctr: line_number
 * Return: no return
*/
void _pint(stack_t **head, unsigned int ctr)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", ctr);
		fclose(bus.file);
		free(bus.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
