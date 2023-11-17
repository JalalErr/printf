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
	char *string = va_arg(argument, char *);

	/* Code section : */
	if (string == NULL)
		string = "(null)";
	while (*string != '\0')
	{
		len += _putchar(*string);
		string++;
	}
	return (len);
}
