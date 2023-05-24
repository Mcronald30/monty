#include "monty.h"

/**
 * m_rotl- rotates the stack to the top
 * @h: stack head
 * @line_num: line_number
 * Return: null
 */
void m_rotl(stack_t **h, unsigned int line_num)
{
	if (*h == NULL || (*h)->next == NULL)
	{
		return;
	}

	stack_t *last = *h;
	stack_t *secondLast = NULL;

	while (last->next != NULL)
	{
		secondLast = last;
		last = last->next;
	}
	secondLast->next = NULL;
	last->next = *h;
	*h = last;
}
