#include "main.h"
/**
 * putptr - Custom putptr function
 * @ptr: Pointer to be printed
 * Return: no of chars printed
 */
int putptr(void *ptr)
{
	int count = 0;

	count += _puts("0x");
	count += put_hex_extra((unsigned long)ptr);
	return (count);
}
/**
 * put_hex_extra - fun
 * @num: num
 * Return: int
 */
int put_hex_extra(unsigned long int num)
{
	long int i, count = 0;
	long int *array;
	unsigned long int tmp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	array = malloc(sizeof(long int) * count);

	for (i = 0; i < count; i++)
	{
		array[i] = tmp % 16;
		tmp = tmp / 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		putchar(array[i] + '0');
	}
	free(array);

	return (count);
}
