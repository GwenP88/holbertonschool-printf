#include "main.h"

/**
 * print_uns - handler pour %u (entier non signé décimal)
 * @args: liste d'arguments variadiques
 *
 * Return: nombre de caractères imprimés
 */
int print_uns_int(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_base(n, 10, "0123456789"));
}