#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
int i = 0;
int len = 0;
char *copy;

if (str == NULL)
{
	return (NULL);
}

while (str[len] != '\0')
{
	len++;
}

copy = malloc((sizeof(char) * len) + 1);

if (copy == NULL)
{
	return (NULL);
}

while (i < len)
{
	copy[i] = str[i];
	i++;
}
copy[len] = str[len];

return (copy);
}
