#include "monty.h"

/**
 * m_push - add node to the stack
 * @h: stack head
 * @line_num: line_number
 * Return: no return
*/
void m_push(stack_t **h, unsigned int line_num)
{
	int n, i = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > '9' || bus.arg[i] < '0')
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_num);
			fclose(bus.file);
			free(bus.cont);
			free_stack(*h);
			free(bus.cont);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	if (bus.ro == 0)
		add_node(h, n);
	else
		add_queue(h, n);
}
