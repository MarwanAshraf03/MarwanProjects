#include "main.h"

/**
 * tokenize - tokenizes a string into tokens
 * @str: the string to be tokenized
 * @argv: string array to have tokens
*/
void tokenize(char *str, char **argv)
{
	char *token;
	const char *delim = " \n";
	int counter;

	token = strtok(str, delim);
	for (counter = 0; token != NULL; counter++)
	{
		argv[counter] = malloc(sizeof(char) * _strlen(token));
		_strcpy(argv[counter], token);
		token = strtok(NULL, delim);
	}
	argv[counter] = NULL;
}

/**
 * tokenize_no - counts the number of tokens in a string
 * @str: the string of tokens
 *
 * Return: number of tokens
*/
int tokenize_no(char *str)
{
	int count;
	char *token;
	const char *delim = " \n";

	token = strtok(str, delim);
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, delim);
	}
	count++;
	return (count);
}
