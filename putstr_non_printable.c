#include "main.h"
/**
 * putstr_non_printable - Custom putstr_non_printable function
 * @str: tring to be printed with non-printable characters handling
 * Return: no of chars printed
 */
int putstr_non_printable(const char *str)
{
	int i, len = 0;
	int value;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			putchar('\\');
			putchar('x');
			len = len + 2;
			value = str[i];
			if (value < 16)
			{
				putchar('0');
				len++;
			}
			len = len + print_HEX_extra(value);
		}
		else
		{
			putchar(str[i]);
			len++;
		}
	}
	return (len);
}

int print_HEX_extra(unsigned int num)
{
	int i, count = 0;
	int *array;
	unsigned int tmp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);

	for (i = 0; i < count; i++)
	{
		array[i] = tmp % 16;
		tmp = tmp / 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		putchar(array[i] + '0');
	}
	free(array);

	return (count);
}
