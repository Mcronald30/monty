#include "monty.h"

/**
 * m_pop - prints the top
 * @h: stack head
 * @line_num: line_number
 * Return: no return
*/
void m_pop(stack_t **h, unsigned int line_num)
{
	stack_t *head;

	head = *h;
	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	*h = head->next;
	free(head);
}
