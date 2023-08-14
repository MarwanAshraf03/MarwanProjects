#include "main.h"

/**
 * _myenv - prints the current environment
 * @information: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 * Return: Always 0
 */
int _myenv(information_t *information)
{
	print_list_str(information->env);
	return (0);
}

/**
 * _getenv - gets the value of an environ variable
 * @information: Structure containing potential arguments. Used to maintain
 * @name: env var name
 *
 * Return: the value
 */
char *_getenv(information_t *information, const char *name)
{
	list_t *node = information->env;
	char *p;

	while (node)
	{
		p = starts_with(node->str, name);
		if (p && *p)
			return (p);
		node = node->next;
	}
	return (NULL);
}

/**
 * populate_env_list - populates env linked list
 * @information: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 * Return: Always 0
 */
int populate_env_list(information_t *information)
{
	list_t *node = NULL;
	size_t i;

	for (i = 0; environ[i]; i++)
		add_node_end(&node, environ[i], 0);
	information->env = node;
	return (0);
}

/**
 * get_environ - returns the string array copy of our environ
 * @information: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 * Return: Always 0
 */
char **get_environ(information_t *information)
{
	if (!information->environ || information->env_changed)
	{
		information->environ = list_to_strings(information->env);
		information->env_changed = 0;
	}

	return (information->environ);
}
