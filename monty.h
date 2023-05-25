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
void push(stack_t **h, unsigned int line_num);
void pall(stack_t **h, unsigned int line_num);
void pint(stack_t **h, unsigned int line_num);
int execute(char *cont, stack_t **h, unsigned int line_num, FILE *file);
void free_stack(stack_t *h);
void pop(stack_t **h, unsigned int line_num);
void swap(stack_t **h, unsigned int line_num);
void add(stack_t **h, unsigned int line_num);
void nop(stack_t **h, unsigned int line_num);
void sub(stack_t **h, unsigned int line_num);
void div(stack_t **h, unsigned int line_num);
void mul(stack_t **h, unsigned int line_num);
void mod(stack_t **h, unsigned int line_num);
void pchar(stack_t **h, unsigned int line_num);
void pstr(stack_t **h, unsigned int line_num);
void rotl(stack_t **h, unsigned int line_num);
void rotr(stack_t **h, __attribute__((unused)) unsigned int line_num);
void add_node(stack_t **h, int n);
void add_queue(stack_t **h, int n);
void queue(stack_t **h, unsigned int line_num);
void stack(stack_t **h, unsigned int line_num);

#endif
