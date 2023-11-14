#include "main.h"
/**
 * _puts - Custom puts function
 * @str: String to be printed
 * Return: num
 */
int _puts(const char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		count += putchar(*str);
		str++;
	}

	return (count);
}
