#include "monty.h"

/**
 * m_rotl- rotates the stack to the top
 * @h: stack head
 * @line_num: line_number
 * Return: null
 */
void m_rotl(stack_t **h, unsigned int line_num)
{
	stack_t *last = *h, *secondlast;
	(void)line_num;

	if (*h == NULL || (*h)->next == NULL)
	{
		return;
	}

	secondlast = (*h)->next;
	secondlast->prev = NULL;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = *h;
	(*h)->next = NULL;
	(*h)->prev = last;
	(*h) = secondlast;
}
