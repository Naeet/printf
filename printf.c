#include "main.h"
/**
 * _printf - printf
 * @format: identifier
 * Return: int
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", print_37},
		{"%d", print_dec}, {"%i", print_int}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unsigned},
		{"%o", print_octal}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exc_string}, {"%p", print_pointer}
	};

	va_list args;
	int j;
	int i = 0, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		if (format[i] == '+' || format[i] == ' ' || format[i] == '#')
		{
			_putchar(format[i]);
			i++;
			len++;
		}
		else
		{
		_putchar(format[i]);
		i++;
		len++;
		}
	
Here:
	continue;
	}
	va_end(args);
	return (len);
}
