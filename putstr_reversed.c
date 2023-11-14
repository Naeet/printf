#include "main.h"
/**
 * putstr_reversed - Custom putstr_reversed function
 * @str: String to be printed in reversed order
 * Return: no of chars printed
 */

int putstr_reversed(const char *str)
{
	int count = 0;
	const char *end = str;

	if (str == NULL)
	{
		count += _puts("(null)");
		return (count);
	}

	while (*end != '\0')
	{
		end++;
	}

	end--;

	while (end >= str)
	{
		count += putchar(*end);
		end--;
	}

	return (count);
}
