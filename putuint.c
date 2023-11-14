#include "main.h"
/**
 * putuint - Custom putuint function
 * @n: Unsigned integer to be printed
 * Return: num of chars printed
 */
int putuint(unsigned int n)
{
	int count = 0;

	count += print_number(n);
	return (count);
}
