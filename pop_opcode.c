#include "monty.h"

/**
 * m_pop - prints the top
 * @h: stack head
 * @line_num: line_number
 * Return: no return
*/
void m_pop(stack_t **h, unsigned int line_num)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	*h = h->next;
	free(h);
}
