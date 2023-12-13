#include "monty.h"
/**
 * _pall- prints
 * @head: stack head
 * @ctr: no used
 * Return: no return
*/
void _pall(stack_t **head, unsigned int ctr)
{
	stack_t *temp;
	(void)ctr;

	temp = *head;
	if (temp == NULL)
		return;


	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
