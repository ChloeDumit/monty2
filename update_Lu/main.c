#include "monty.h"

/**
 * main - runs monty interpreter
 * @argc: argument count
 * @argv: argument vector
 * Return: return -1 if failed, else 1
 */
int main(int argc, char **argv)
{
  ssize_t fdclose, fdread, fdwrite;
  int fd;
  const char *file = argv[1];
  char *new;

  (void) argc;
  new = malloc(sizeof(char));

  fd = open(file, O_RDONLY);
  if (fd < 0)
	{
		return (0);
	}
  fdread = read(fd, new, 100);
  if (fdread < 0)
	{
		return (0);
	}
  fdwrite = write(STDOUT_FILENO, new, fdread);
  if (fdwrite < 0)
	{
		return (0);
	}
  fdclose = close(fd);
  if (fdclose < 0)
	{
		return (0);
	}
  return (fdread);
}    