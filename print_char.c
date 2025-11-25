#include "main.h"

/* fonction print_char appelÃ© via sep_tab et print_text*/
int print_char(va_list args)
{
    char c = va_arg(args, int);
    _putchar(c);
    return (1);
}