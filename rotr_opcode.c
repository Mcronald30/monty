#include "monty.h"

/**
 * m_rotr- rotates the stack to the bottom
 * @h: stack head
 * @line_num: line_number
 * Return: null
 */
void m_rotr(stack_t **h, __attribute__((unused)) unsigned int line_num)
{
	stack_t *current;

	current = *h;

	if (*h == NULL || (*h)->next == NULL)
	{
		return;
	}

	while (current->next)
	{
		current = current->next;
	}

	current->next = *h;
	current->prev->next = NULL;
	current->prev = NULL;
	(*h)->prev = current;
	(*h) = current;
}
