#include "main.h"

/**
 * print_bin - handler pour %b (binaire)
 * @args: liste d'arguments variadiques
 *
 * Return: nombre de caractères imprimés
 */
int print_bin(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_base(n, 2, "01"));
}