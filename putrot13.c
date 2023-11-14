#include "main.h"
/**
 * putstr_rot13 - Custom putstr_rot13 function
 * @str: str to be prin
 * Return: no of chars ri
 */
int putstr_rot13(const char *str)
{
	int count = 0;

	if (str == NULL)
	{
		count += _puts("(null)");
		return (count);
	}

	while (*str != '\0')
	{
		count += putchar(rotate_13(*str));
		str++;
	}

	return (count);
}

/**
 * rotate_13 - Custom rotate_13 function
 * @c: char
 * Return: char
 */
int rotate_13(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';

		return (((c - base + 13) % 26) + base);
	}
	return (c);
}
