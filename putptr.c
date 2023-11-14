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
	count += puthex((unsigned long)ptr, 1);
	return (count);
}
