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
void pall(stack_t **stack, unsigned int lin_number)
{
stack_t *temp;
(void)line_number;
if(!stack || !(*stack) == NULL)
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
