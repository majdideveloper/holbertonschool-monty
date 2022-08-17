#include <stdio.h>
#include <stdlib.h>
/**
* main - function monty program
Return : success or failure
*/
int main(int argc, char **argv)
{
	FILE *monty_file = NULL;
	int exit_status = EXIT_SUCCESS;

	if (argc != 2)
		/* FUNCTION ERROR/
		return;
	monty_file = fopen(argv[1], "r"); /* open file/
	
	if (monty_file == NULL)
		
		return;
	
	exit_status = run_monty(monty_file); /**function that execute the monty bytecodes, check the file,the option need it like push pall swap..., I think that it will be like printf main.c and return exit status success or faill */ 
	
	fclose(monty_file); 
	return(exit_status);
}