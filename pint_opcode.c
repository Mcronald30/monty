#include "monty.h"

/**
 * pint - prints the top
 * @h: stack head
 * @line_num: line_number
 * Return: no return
*/
void pint(stack_t **h, unsigned int line_num)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}
