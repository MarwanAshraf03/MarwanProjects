#include "main.h"
/**
 * main - the main function to be executed
 * @ac: number of arguments of the main
 * @argv: array of arguments of the main
 * Return: returns 0 on success, -1 otherwise
 */
int main(int ac, char **argv)
{
	char *prompt = "$ ", *lineptr = NULL, *lineptr_cpy = NULL;
	size_t n = 0;
	ssize_t no_read_chars;
	int token_no; 

	(void)ac;
	while (1)
	{
		write(STDOUT_FILENO, prompt, 3);
		no_read_chars = getline(&lineptr, &n, stdin);
		if (no_read_chars == -1)
		{
			write(STDOUT_FILENO, "exitting shell...\n", 19);
			return (-1);
		}
		lineptr_cpy = malloc(sizeof(char) * no_read_chars);
		if (!lineptr_cpy)
		{
			perror("tsh: memory allocation error!");
			return (-1);
		}
		_strcpy(lineptr_cpy, lineptr);
		token_no = tokenize_no(lineptr);
		argv = malloc(sizeof(char *) * token_no);
		tokenize(lineptr_cpy, argv);
		execmd(argv);
	}
	free(argv);
	free(lineptr_cpy);
	free(lineptr);
	return (EXIT_SUCCESS);
}
