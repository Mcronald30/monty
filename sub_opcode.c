#include "monty.h"

/**
 * m_sub- sustration
 * @h: stack head
 * @line_num: line_number
 * Return: null
 */
void m_sub(stack_t **h, unsigned int line_num)
{
	stack_t *data;
	int sub, node;

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

	sub = data->next->n - data->n;
	data->next->n = sub;
	*h = data->next;
	free(data);
}
