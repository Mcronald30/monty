#include "monty.h"

/**
 * m_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @h: stack head
 * @line_num: line_number
 * Return: null
*/
void m_pchar(stack_t **h, unsigned int line_num)
{
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
