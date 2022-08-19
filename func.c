#include "monty.h"

void push (struct stack_t** stack, unsigned int line_number)
{
stack_t newNode;
char *value;
int check;
newNode = malloc(sizeof(stack_t));
if (newNode == NULL)
{
free(newNode);
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
check = checkvalue(value, line_number);
newNode->n = check;;
newNode->prev = NULL;
if (!(*stack))
{
*stack = newNode;
return;
}
(*stack)->prev = newNode;
newNode->next = *stack;
*stack = newNode;
}
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
(void)line_number;
if(!stack || !(*stack))
return;
temp = *stack;
while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
}
}
/**
 * @brief 
 * 
 */
void pint(stack_t **stack, unsigned int line_number)
{
if(!stack || !(*stack))
{
fprintf(stderr, "L%u: can't pint, stack empty", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack->n));
}
/**
 * @brief 
 * 
 */
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
if(!stack || !(*stack))
{
fprintf(stderr, "L%u: can't pop an empty stack", line_number);
exit(EXIT_FAILURE);
}
temp = *stack;
*stack = (*stack)->next;
free(temp);
}
/**
 * @brief 
 * 
 */
void swap (struct stack_t** stack, unsigned int line_number)
{
stack_t *temp;
int vide;
if (!stack || !(*stack) || !(*stack)-> next)
{
fprintf(stderr, "L%u: can't swap, stack too short", line_number);
exit(EXIT_FAILURE);
}
temp = (*stack)->next;
vide = (*stack)->n;
(*stack)->n = temp ->n;
temp->n = vide;
}
/**
 * @brief 
 * 
 */
void add (struct stack_t** stack, unsigned int line_number)
{
stack_t temp; 
int Sum;
if (!stack || !(*stack) || !(*stack)-> next)
{
fprintf(stderr, "L%u: can't add, stack too short", line_number);
exit(EXIT_FAILURE);
}
temp = (*stack->next);
Sum = (*stack->n) + temp->n;
free(*stack);
(*stack) = temp;
(*stack)->n= Sum;
}
