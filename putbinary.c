#include "main.h"
/**
 * putbinary - Custom putbinary function
 * @n: unsiged int to be printed in binary
 * Return: no of chars printed
 */
int putbinary(unsigned int n)
{
	int count = 0;

	if (n > 1)
		count += putbinary(n / 2);
	count += putchar('0' + n % 2);
	return (count);
}
