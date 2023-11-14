#include "main.h"
/**
 * putoctal - Custom putoctal function
 * @n: num to be p in octal
 * Return: no of chars
 */
int putoctal(unsigned int n)
{
	int count = 0;

	if (n > 7)
		count += putoctal(n / 8);
	count += putchar('0' + n % 8);

	return (count);
}
