#include "monty.h"
/**
 * m_rotr- rotates the stack to the bottom
 * @h: stack head
 * @line_num: line_number
 * Return: null
 */
void m_rotr(stack_t **h, unsigned int line_num)
{
	if (*h == NULL || (*h)->next == NULL)
	{
		return;
	}

	stack_t *current = *h;
	stack_t *prev = NULL;

	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}

	prev->next = NULL;
	current->next = *h;
	*h = current;
}
