#include "main.h"

/**
 * print_octal - unsigned int to octal
 * @val: arg
 * Return: num of digits
 */

int print_octal(va_list val)
{
	int i, count = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tmp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);

	for (i = 0; i < count; i++)
	{
		array[i] = tmp % 8;
		tmp = tmp / 8;
	}

	for (i = count - 1; i >= 0; i--)
		_putchar(array[i] + '0');

	free(array);

	return (count);
}
