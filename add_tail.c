#include "monty.h"
/**
 * add_tail- add node at the tail of linked list.
 * @head: head of the linked list
 * @n:value to be added.
 * Return: no return
*/
void add_tail(stack_t **head, int n)
{
	stack_t *New, *temp;

	temp = *head;
	New = malloc(sizeof(stack_t));

	if (New == NULL)
	{
		fprintf(stderr, "memory can't be allocated\n");
		exit(0);
	}
	New->n = n;
	New->next = NULL;
	if (*head == NULL)
	{
	*head = New;
	New->prev = NULL;
	return;
	}
	while (temp->next !=  NULL)
	{
		temp = temp->next;
	}
	temp->next = New;
	New->prev = temp;
}
