#include "monty.h"

#define TOKEN_DELIM " \t\n\r"
extern var_ var;

/**
 * main - runs monty interpreter
 * @argc: argument count
 * @argv: argument vector
 * Return: return -1 if failed, else 1
 */
int main(int argc, char **argv)
{
    char line[100];
    char *token;
    char refer[2][100];
    int i = 0;

    if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

    var.fil = fopen(argv[1], "r");
    if (var.fil == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
    }

    var.line_number = 1;
    var.mystack = NULL;
    var.queue_ask = 0;


    while(fgets(line, sizeof(line), var.fil))
    {
        
        i = 0;
        memset(refer[0], 0, 100);
        memset(refer[1], 0, 100);
        token = strtok(line, " \n\t");
        if(token)
        {
            while (token != NULL)
            {
                strcpy(refer[i], token);
                token = strtok(NULL, " \n\t");
                i++;
            }
            run(refer);
        }
        var.line_number++;
    }
    fclose(var.fil);
    f_list(var.mystack);
    return(0);
}
