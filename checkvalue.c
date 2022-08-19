#include "monty.c"
/**
 * @brief
 * 
 */
int checkval(char *value, unsigned int line_numer)
{
    int i;
    if (!value)
    {
    fprintf(stderr, "L%u: usage: push integer\n", line_number);
    exit(EXIT_FAILURE);
    }
    while (value)
    {
    if(!digit(value))
    {
    fprintf(stderr, "L%u: usage: push integer\n", line_number);
    exit(EXIT_FAILURE);
    }
    return (atoi(value));
    }
    
}