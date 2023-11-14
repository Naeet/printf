#include "main.h"
/**
 * _printf - Custom printf function
 * @format: Format
 * Return: no
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (ptr = format; *ptr != '\0'; ptr++)
	{

		if (*ptr == '%' && *(ptr + 1) != '\0')
		{

			ptr++;
			switch (*ptr)
			{
				case 'c':
					count += putchar(va_arg(args, int));
					break;
				case 's':
					count += _puts(va_arg(args, char *));
					break;
				case 'd':
				case 'i':
					count += putint(va_arg(args, int));
					break;
				case 'b':
					count += putbinary(va_arg(args, unsigned int));
					break;
				case 'u':
					count += putuint(va_arg(args, unsigned int));
					break;
				case 'o':
					count += putoctal(va_arg(args, unsigned int));
					break;
				case 'x':
					count += puthex(va_arg(args, unsigned int), 0);
					break;
				case 'X':
					count += puthex(va_arg(args, unsigned int), 1);
					break;
				case 'S':
					count += putstr_non_printable(va_arg(args, char *));
					break;
				case 'p':
					count += putptr(va_arg(args, void *));
					break;
				case 'r':
					count += putstr_reversed(va_arg(args, char *));
					break;
				case 'R':
					count += putstr_rot13(va_arg(args, char *));
					break;
				case '%':
					buffer[count++] = '%';
					break;
				default:
					count += putchar('%');
					count += putchar(*ptr);
					break;
			}
		}
		else
		{
			count += putchar(*ptr);
		}
	}

	va_end(args);

	return (count);
}
