#include "main.h"
/**
 * putptr - Custom putptr function
 * @ptr: Pointer to be printed
 * Return: no of chars printed
 */
int putptr(void *ptr)
{
	int i, b;
	char *s = "(nil)";
	long int a;

	if (ptr == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			putchar(s[i]);
		return (i);
	}
	a = (unsigned long int)ptr;
	putchar('0');
	putchar('x');
	b = put_hex_extra(a);

	return (b + 2);
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
