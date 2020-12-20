#include "monty.h"

#define TOKEN_DELIM " \t\n\r"

/**
 * main - runs monty interpreter
 * @argc: argument count
 * @argv: argument vector
 * Return: return -1 if failed, else 1
 */
int main(int argc, char **argv)
{
    FILE *fil;
    ssize_t nread;
    size_t len = 0;
    char *line = NULL;
    char *line_number = NULL, *token2 = NULL;
    size_t i = 0;


    instruction_t func_array[] = {
		{"pall", pall},
        {"hello", hello},
        {NULL, NULL}
    };

    (void) argc;

    if (argc != 2)
	{
		fprintf(stdout, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

    fil = fopen(argv[1], "r");
    if (fil == NULL)
    {
        fprintf(stdout, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
    }

    while((nread = getline(&line, &len, fil) != -1))
    {
        while (line[0] == 32)
        {
            line++;
        }
        if (line[0] == '\n')
        {
            printf("\n");
        }
        if (line[0] == '\0')
        {
            break;
        }
        /*printf("la linea es: %s\n", line);*/
        line_number = strtok(line, "\n");
        /*printf("primer token %s\n", line_number);*/
        token2 = strtok(line_number, " ");
        printf("segundo token %s\n", token2);
        /*while(func_array[i].opcode != NULL)
        {
        if (token2 == func_array[i].opcode[0])
        {
            printf("soy tu funcion pall\n");
        }
        i++;
        }*/
        while(func_array[i].opcode != NULL)
        {            
        if(strcmp(func_array[i].opcode, token2) == 0)
        {
            printf("comparacion %s\n", func_array[i].opcode);
            
        }
        else
        {
            printf("else\n");
            break;   
        }
        i++;
        }
        

        
    }
    fclose(fil);
    exit(EXIT_SUCCESS);
    
return(0);
}