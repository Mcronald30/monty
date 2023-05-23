#include "monty.h"

/**
 * m_sub- sustration
 * @h: stack head
 * @line_num: line_number
 * Return: null
 */
void m_sub(stack_t **h, unsigned int line_num)
{
	int sub, data;

	for (data = 0; h != NULL; data++)
		h = h->next;
	if (data < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	sub = h->next->n - h->n;
	h->next->n = sub;
	*h = h->next;
	free(h);
}
