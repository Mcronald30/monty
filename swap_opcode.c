#include "monty.h"

/**
 * m_swap - adds the top two elements of the stack.
 * @h: stack head
 * @line_num: line_number
 * Return: null
*/
void m_swap(stack_t **h, unsigned int line_num)
{
	int count = 0, data;

	while (h)
	{
		h = h->next;
		count++;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	data = h->n;
	h->n = h->next->n;
	h->next->n = data;
}
