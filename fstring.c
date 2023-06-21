#include "shell.h"

/**
 * _strlen - string len
 * @line: string that we need it's len
 * Return: strlen of string
 */
int _strlen(char *line)
{
	int len = 0;

	if (line == NULL)
		return (0);

	while (line[len])
		len++;

	return (len);
}

/**
 * _strcmp - Compare Two String
 * @s1:String 1
 * @s2:String 2
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
int scmp = 0, i, len1, len2;
len1 = _strlen(s1);
len2 = _strlen(s2);

	if (s1 == NULL || s2 == NULL)
		return (1);
	if (len1 != len2)
		return (1);
	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			scmp = s1[i] - s2[i];
			break;
		}
		else
			continue;
	}
	return (scmp);
}

/**
 * _strcat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 *
 * Return: pointer to destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *cat = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (cat);
}
