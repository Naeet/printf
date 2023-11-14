#include "main.h"
/**
 * putstr_non_printable - Custom putstr_non_printable function
 * @str: tring to be printed with non-printable characters handling
 * Return: no of chars printed
 */
int putstr_non_printable(const char *str)
{
	int count = 0;
	const unsigned char *ustr = (const unsigned char *)str;

	if (ustr == NULL)
	{
		count += _puts("(null)");
		return (count);
	}

	while (*ustr != '\0')
	{
		if (*ustr < 32 || *ustr >= 127)
		{
			count += putchar('\\');
			count += puthex(*ustr, 1);
		}
		else
		{
			count += putchar(*ustr);
		}
		ustr++;
	}
	return (count);
}
