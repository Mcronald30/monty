#include "monty.h"
/**
 * m_pall - prints the stack
 * @h: stack head
 * @line_num: line number
 * Return: no return
*/
void m_pall(stack_t **h, unsigned int line_num)
{
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
