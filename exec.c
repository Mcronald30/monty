#include "monty.h"

/**
* execute - executes the opcode
* @stack: head linked list - stack
* @line_num: line_counter
* @file: poiner to monty file
* @cont: line content
* Return: null
*/
int execute(char *cont, stack_t **stack, unsigned int line_num, FILE *file)
{
	instruction_t opst[] = {
				{"push", m_push}, {"pall", m_pall}, {"pint", m_pint},
				{"pop", m_pop},
				{"swap", m_swap},
				{"add", m_add},
				{"nop", m_nop},
				{"sub", m_sub},
				{"div", m_div},
				{"mul", m_mul},
				{"mod", m_mod},
				{"pchar", m_pchar},
				{"pstr", m_pstr},
				{"rotl", m_rotl},
				{"rotr", m_rotr},
				{"queue", m_queue},
				{"stack", m_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(cont, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, line_num);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", line_num, op);
		fclose(file);
		free(cont);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
