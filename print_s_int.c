#include "main.h"

/**
 * print_nb - 
 * @args: 
 * 
 */

int print_s_int(va_list args)
{
    int n = va_arg(args, int);
    unsigned int va_n;
    int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	} else if (n > 0)
	{
		va_n = n;
	} else if (n < 0)
	{
		_putchar('-');
        count++;
		va_n = -n;
	}
	/*Display of the unsigned part in base 10 delegated */
	count += print_unsigned_base(va_n, 10, "0123456789");
	
    return (count);
}