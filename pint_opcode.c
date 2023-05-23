#include "monty.h"
/**
 * m_pint - prints the top
 * @h: stack head
 * @line_num: line_number
 * Return: no return
*/
void m_pint(stack_t **h, unsigned int line_num)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}
