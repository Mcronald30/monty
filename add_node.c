#include "monty.h"

/**
 * add_node - add node to the head stack
 * @h: head of the stack
 * @n: new_value
 * Return: null
*/
void add_node(stack_t **h, int n)
{
	stack_t *new_node, *data;

	data = *h;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (data)
		data->prev = new_node;
	new_node->n = n;
	new_node->next = *h;
	new_node->prev = NULL;
	*h = new_node;
}
