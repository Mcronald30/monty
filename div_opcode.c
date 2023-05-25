#include "monty.h"

/**
 * div - divides the top two elements of the stack.
 * @h: stack head
 * @line_num: line_number
 * Return: null
*/

void div(stack_t **h, unsigned int line_num)
{
	stack_t *head;
	int count = 0, data;

	head = *h;
	while (head)
	{
		head = head->next;
		count++;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	head = *h;
	if (head->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	data = head->next->n / head->n;
	head->next->n = data;
	*h = head->next;
	free(head);
}
