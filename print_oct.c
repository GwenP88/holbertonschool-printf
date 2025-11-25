#include "main.h"

/**
 * print_oct - handler pour %o (octal)
 * @args: liste d'arguments variadiques
 *
 * Return: nombre de caractères imprimés
 */
int print_oct(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_base(n, 8, "01234567"));
}