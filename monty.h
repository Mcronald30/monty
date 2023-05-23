#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @cont: line content
 * @ro: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *cont;
	int ro;
}  bus_t;
extern bus_t bus;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *cont);
void m_push(stack_t **h, unsigned int line_num);
void m_pall(stack_t **h, unsigned int line_num);
void m_pint(stack_t **h, unsigned int line_num);
int execute(char *cont, stack_t **h, unsigned int line_num, FILE *file);
void free_stack(stack_t *h);
void m_pop(stack_t **h, unsigned int line_num);
void m_swap(stack_t **h, unsigned int line_num);
void m_add(stack_t **h, unsigned int line_num);
void m_nop(stack_t **h, unsigned int line_num);
void m_sub(stack_t **h, unsigned int line_num);
void m_div(stack_t **h, unsigned int line_num);
void m_mul(stack_t **h, unsigned int line_num);
void m_mod(stack_t **h, unsigned int line_num);
void m_pchar(stack_t **h, unsigned int line_num);
void m_pstr(stack_t **h, unsigned int line_num);
void m_rotl(stack_t **h, unsigned int line_num);
void m_rotr(stack_t **h, unsigned int line_num);
void add_node_end(stack_t **h, int n);
void add_node_beginning(stack_t **h, int n);
void m_queue(stack_t **h, unsigned int line_num);
void m_stack(stack_t **h, unsigned int line_num);

#endif
