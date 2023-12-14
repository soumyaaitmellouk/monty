#include "monty.h"
/**
 * _pop - print the head of linked list.
 * @head: parametr 1
 * @ctr: parameter 2 
 * Return: no return
*/
void _pop(stack_t **head, unsigned int ctr)
{
	stack_t *temp;

	
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", ctr);
		fclose(bus.file);
		free(bus.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}
