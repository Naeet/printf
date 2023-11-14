#include "main.h"

/**
 * _strlen - Returns leng of a str
 * @str: str ptr
 * Return: i
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlenc - strlen fun but applied for constant char ptr str
 * @str: char ptr
 * Return: i
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
