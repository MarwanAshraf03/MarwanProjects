#include "main.h"

/**
 * execmd - a function to execute commands written by the user
 * @argv: array of tokens that user had entered
 */
void execmd(char **argv)
{
	char *command = NULL, *actual_command = NULL;
	pid_t child_pid;
	int mode;

	child_pid = fork();
	if (child_pid == -1)
	{
		/* TODO: PUT ERROR FUNCTION */
		perror("Error:");
		return;
	}
	if (child_pid == 0)
	{
		command = argv[0];
		actual_command = get_location(command);
		if (execve(actual_command, argv, NULL) == -1)
		{
			if (errno == EACCES)
				exit(126);
			exit(1);
		}
		/* TODO: PUT ERROR FUNCTION */
	}

	// if (argv)
	// {
	// command = argv[0];
	// actual_command = get_location(command);
	// mode = execve(actual_command, argv, NULL);
	// if (mode == -1)
	// {
	// 	perror("Error:");
	// }
	// printf("killed\n");
	// kill(child_pid, SIGKILL);
	// }
}
