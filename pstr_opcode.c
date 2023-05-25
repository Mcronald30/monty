#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @h: stack head
 * @line_num: line_number
 * Return: null
*/
void pstr(stack_t **h, unsigned int line_num)
{
	stack_t *head;
	(void)line_num;

	head = *h;
	while (head)
	{
		if (head->n > 127 || head->n <= 0)
		{
			break;
		}
		printf("%c", head->n);
		head = head->next;
	}
	printf("\n");
}
