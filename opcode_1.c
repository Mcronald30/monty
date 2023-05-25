#include "monty.h"

/**
 * pall - prints the stack
 * @h: stack head
 * @line_num: line number
 * Return: no return
*/
void pall(stack_t **h, unsigned int line_num)
{
	stack_t *head;
	(void)line_num;

	head = *h;
	if (head == NULL)
		return;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
