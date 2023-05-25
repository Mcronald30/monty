#include "monty.h"

/**
 * sub- sustration
 * @h: stack head
 * @line_num: line_number
 * Return: null
 */
void sub(stack_t **h, unsigned int line_num)
{
	stack_t *data;
	int mus, node;

	data = *h;
	for (node = 0; data != NULL; node++)
		data = data->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	mus = data->next->n - data->n;
	data->next->n = mus;
	*h = data->next;
	free(data);
}
