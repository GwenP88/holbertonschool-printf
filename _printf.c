#include "main.h"

/*
*
*
*
*
*
*/

/*
* initialiser les variables va_list
* parcourir la chaine donné (format)
* si % vu - renvoyer la bonne fonction
* retourner le nb de caractère
*
*/

int _printf(const char *format, ...)
{
    va_list args;
    /* int count_char = 0; */
    /* int format_index = 0;  **/

/* print sert à appeler la fonction _print_text qui sera 
*la fonction principale (moteur)*/
    int print;

    va_start(args, format);
    print = _core_printf(format, args);

    /*boucler sur format
    * si caractère normal = putchart et count ++
    * si % aller dans find specifier, choisir la bonne function
    */

    va_end(args);
    return (print);
}