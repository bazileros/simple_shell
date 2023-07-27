#include "shell.h"

/**
 * _strstr - customised function that works similar to the builtin strstr
 * @haystack: argument one,
 * @needle: argument two,
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, const char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
