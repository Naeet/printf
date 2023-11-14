#include "main.h"
/**
 * putint - putint
 * @n: int to be printed
 *
 * Return: no of chars printed
 */
int putint(int n)
{
	int count = 0;

	if (n < 0)
	{
		count += putchar('-');
		n = -n;
	}
	count += print_number(n);
	return (count);
}
