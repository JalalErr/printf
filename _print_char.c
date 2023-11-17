#include "main.h"

/**
 * _print_char - function prints an character .
 * @argument: the character to print.
 * Return: in success 1 & in erreur -1 .
*/

int _print_char(va_list argument)
{
/* Variable declaration : */
char c = va_arg(argument, int);

/* Code section : */
_putchar(c);

return (1);
}
