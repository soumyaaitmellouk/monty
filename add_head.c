#include "monty.h"
/**
 * add_head- add node at the head of linked list.
 * @head: head of the linked list
 * @n:value to be added.
 * Return: no return
*/
void add_head(stack_t **head, int n)
{
	stack_t *New, *temp;

	temp = *head;
	New = malloc(sizeof(stack_t));

	if (New == NULL)
	{
		fprintf(stderr, "memory can't be allocated\n");
		exit(0);
	}

	if (temp != NULL)
	{
		temp->prev = New;
	}
	New->n = n;
	New->next = *head;
	New->prev = NULL;
	*head = New;
}
