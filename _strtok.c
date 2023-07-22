#include "shell.h"

/**
 * _strtok - breaks a string into a sequence of zero or more nonempty tokens.
 * @str: the input string
 * @delim: the delimeter
 * Return: a pointer to an array of strings, or NULL on failure
 */

char *_strtok(char *str, char *delim)
{
	static char *nextToken;
	char *tokenStart;

	nextToken = NULL;

	if (str)
		nextToken = str;

	if (!nextToken)
		return (NULL);

	while (*nextToken && _strchr(delim, *nextToken))
		nextToken++;

	if (!*nextToken)
	{
		nextToken = NULL;
		return (NULL);
	}

	tokenStart = nextToken;
	while (*nextToken && !_strchr(delim, *nextToken))
		nextToken++;

	if (*nextToken)
	{
		*nextToken = '\0';
		nextToken++;
	}
	else
	{
		nextToken = NULL;
	}

	return (tokenStart);
}
