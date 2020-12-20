#include "monty.h"

/**
 * main - runs monty interpreter
 * @argc: argument count
 * @argv: argument vector
 * Return: return -1 if failed, else 1
 */
int main(int argc, char **argv)
{
    FILE *file;
    instruction_t func_array[] = {
		{"pall", pall}
    };
    int j = 0;
    char *line = NULL;

    (void) argc;

    if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
    }

    while(fgets(line, sizeof(line), file))
    {
       if (strcmp(func_array[j].opcode, argv[0]) == 0)

	       func_array.f(&(global_v.stack), global_v.line_number); /*should pass the stack where to do the function and the line where it is*/
    }
    return (0);
}
