#include "main.h"

/**
 * get_specifier - function that selects the correct function for a format specifier
 * @spe_c: character found after the '%'
 *
 * Return: pointer to the corresponding handler function,
 *         or NULL if the specifier is not supported.
 */

int (*get_specifier(char spe_c))(va_list)
{
    int i = 0;
    spe_tab tab[] = 
    {
        {'c', print_char},
        {'s', print_str},
        {'%', print_mod},
        {'d', print_nb},
        {'i', print_nb},
        {'\0', NULL}
    };

	while (tab[i].spe_c != '\0')
	{
		if (spe_c == tab[i].spe_c)
			return (tab[i].f);
		i++;
	}
	return (NULL);
}