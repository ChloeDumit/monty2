#include "monty.h"
extern var_ var;
/**
 * exec - Entry point
 * Description: execute opcode function
 * @array: double pointer that point to 2d array
 * Return: no thing
 */
 void run(char (*refer)[100])
 {
     int j = 0;
     instruction_t funcs[] = {
         {"pall", pall},
         {"push", push}
         {NULL, NULL},
     };
     for (j = 0; j < 2; j++)
     {
         if(strcmp(funcs[j].opcode, refer[0]) == 0)
         {
             var.num = refer[1];
             funcs[j].f(&(var.stack), var.line_number);
             return;
         }
         else if (j == 2)
         {
             fprintf(stderr, "L%u: unknown instruction %s\n", var.line_number, refer[0]);
             fclose(var.file);
             f_list(mystack);
             exit(EXIT_FAILURE);
         }
    }
 }