#include "monty.h"

/**
 * m_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @h: stack head
 * @line_num: line_number
 * Return: null
*/
void m_pstr(stack_t **h, unsigned int line_num)
{
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
