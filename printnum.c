#include "main.h"
/**
 * print_number - Custom print_number function
 * @n: non-neg int to be printed
 * Return: num of chars printed
 */
int print_number(unsigned int n)
{
	int count = 0;

	if (n / 10 != 0)
		count += print_number(n / 10);
	count += putchar('0' + n % 10);
	return (count);
}
