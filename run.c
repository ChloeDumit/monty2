#include "monty.h"

/**
 * run - Entry point
 * @refer: double pointer that point to 2d array
 * Return: no thing
 */
void run(char (*refer)[100])
{
int j = 0;
instruction_t funcs[] = {
{"push", push},
{"pall", pall},
{"pint", pint},
{"pop", pop},
{"nop", nop},
{"swap", swap},
{"add", add},
{NULL, NULL},
};
for (j = 0; j < 8; j++)
{
if (strcmp(funcs[j].opcode, refer[0]) == 0)
{
vari.num = refer[1];
funcs[j].f(&(vari.mystack), vari.line_number);
return;
}
else if (j == 6)
{
fprintf(stderr, "L%u: unknown instruction %s\n", vari.line_number, refer[0]);
fclose(vari.fil);
f_list(vari.mystack);
exit(EXIT_FAILURE);
}
}
}
