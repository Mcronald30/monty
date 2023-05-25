#include "monty.h"

/**
 * add_node - add node to the head stack
 * @h: head of the stack
 * @n: new_value
 * Return: null
*/
void add_node(stack_t **h, int n)
{
	stack_t *node, *data;

	data = *h;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (data)
		data->prev = node;
	node->n = n;
	node->next = *h;
	node->prev = NULL;
	*h = node;
}
