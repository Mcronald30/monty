#include "monty.h"

/**
 * m_queue - prints the top
 * @h: stack head
 * @line_num: line_number
 * Return: null
*/
void m_queue(stack_t **h, unsigned int line_num)
{
	(void)h;
	(void)line_num;
	bus.ro = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @h: head of the stack
 * Return: null
*/
void addqueue(stack_t **h, int n)
{
	stack_t *current, *data;

	data = *h;
	current = malloc(sizeof(stack_t));
	if (current == NULL)
	{
		printf("Error\n");
	}
	current->n = n;
	current->next = NULL;
	if (data)
	{
		while (data->next)
			data = data->next;
	}
	if (!data)
	{
		*h = current;
		current->prev = NULL;
	}
	else
	{
		data->next = current;
		current->prev = data;
	}
}
