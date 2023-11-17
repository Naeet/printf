#include "main.h"

/**
 * print_hex_extra - unsigned int to octal
 * @num: arg
 * Return: num of digits
 */

int print_hex_extra(unsigned long int num)
{
	long int i, count = 0;
	int *array;
	unsigned long int tmp = num;

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
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);

	return (count);
}
