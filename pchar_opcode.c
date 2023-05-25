#include "monty.h"

/**
 * pchar - prints the char at the top of the stack,
 * followed by a new line
 * @h: stack head
 * @line_num: line_number
 * Return: null
*/
void pchar(stack_t **h, unsigned int line_num)
{
	stack_t *head;

	head = *h;
	if (!head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	if (head->n > 127 || head->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", head->n);
}
