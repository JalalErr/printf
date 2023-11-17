#include "main.h"

/**
 * _print_string - function prints an string.
 * @argument: string print .
 * Return: the lenght of string.
 */

int _print_string(va_list argument)
{
/* Variable Declaring  :*/
int len = 0;
char *string, string_null[4] = "NULL";

/* Code section : */
string = va_arg(argument, char *);
if (string == NULL)
return (write(1, string_null, 4));
while (string[len])
{
_putchar(string[len]);
len++;
}
return (len);
}
