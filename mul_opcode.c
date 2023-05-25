#include "monty.h"

/**
 * mul - multiplies the top two elements of the stack.
 * @h: stack head
 * @line_num: line_number
 * Return: null
*/
void mul(stack_t **h, unsigned int line_num)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	data = head->next->n * head->n;
	head->next->n = data;
	*h = head->next;
	free(head);
}
