#include "main.h"

/* print_str appelÃ© via sep_tab et print_tex*/
int print_str(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;

    if (!str)
        str = "(null)";

    while (str[count])
        _putchar(str[count++]);

    return (count);
}