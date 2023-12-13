#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: nombre of arguments
* @argv: name of argument
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t line = 1;
	stack_t *stack = NULL;
	unsigned int ctr = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (line > 0)
	{
		content = NULL;
		line = getline(&content, &size, file);
		bus.content = content;
		ctr++;
		if (line > 0)
		{
			execution(content, &stack, ctr, file);
		}
		free(content);
	}
	_free(stack);
	fclose(file);
return (0);
}

