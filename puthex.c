#include "main.h"
/**
 * puthex - Custom puthex function
 * @n: unsigned int to hex
 * @uppercase: Flag to print uppercase letters
 *
 * Return: num of chars
 */
int puthex(unsigned int n, int uppercase)
{
	int count = 0;
	char hex_digit;

	if (n > 15)
		count += puthex(n / 16, uppercase);

	hex_digit = (n % 16 < 10) ? ('0' + n % 16) :
		(uppercase ? ('A' + n % 16 - 10) : ('a' + n % 16 - 10));
	count += putchar(hex_digit);

	return (count);
}
