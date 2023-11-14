#include "main.h"
/**
 * putchar - Custom putchar function
 * @c: char to be printed
 * Return: 1
 */
int putchar(int c)
{
	return (write(1, &c, 1));
}
