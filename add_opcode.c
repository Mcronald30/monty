#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @h: stack head
 * @line_num: line_number
 * Return: null
*/
void add(stack_t **h, unsigned int line_num)
{
	int count = 0, data;

	stack_t *head;

	head = *h;
	while (head)
	{
		head = head->next;
		count++;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	head = *h;
	data = head->n + head->next->n;
	head->next->n = data;
	*h = head->next;
	free(head);
}
