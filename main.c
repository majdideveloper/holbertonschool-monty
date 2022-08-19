#include <stdio.h>
#include <stdlib.h>
/**
* main - function monty program
Return : success or failure
*/
int main(int argc, char **argv)
{
	FILE *monty_file = NULL;
    size_t size  =  0;
    char *contents = NULL;
    int exit_status = EXIT_SUCCESS;
	if (argc != 2)
	exit(EXIT_FAILURE);
monty_file = fopen(argv[1], "r");
	if (monty_file == NULL)
		{
        printf("Error: Can't open file");
		exit(EXIT_FAILURE);
        }
	exit_status  = run_monty(monty_file);
    getline(&contents,&size,monty_file);
	fclose(monty_file); 
	return(exit_status);
}