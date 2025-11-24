#include "main.h"

/**
 * print_nb - 
 * @args: 
 * 
 */

int print_nb(va_list args)
{
    int n = va_arg(args, int);
    unsigned int va_n;
	int power = 1;
	int rest = 0;
	int digit = 0;
    int count = 0;

	if (n == 0)
	{
		_putchar('0');
        count++;
		return(count);
	} else if (n > 0)
	{
		va_n = n;
	} else if (n < 0)
	{
		_putchar('-');
        count++;
		va_n = -n;
	}

	while ((va_n / power) >= 10)
	{
		power *= 10;
	}

	while (power >= 1)
	{
		digit = va_n / power;
		_putchar('0' + digit);
		rest = va_n % power;
		va_n = rest;
		power /= 10;
        count++;
	}
    return (count);
}