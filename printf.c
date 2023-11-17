#include "main.h"

/**
 * _printf - function.
 * @format: variable contains the content to be written in stdout.
 * Return: the totale number of characters printed.
 *         on erreur, a negative number.
 */

int _printf(const char *format, ...)
{
	/*Variable declaring section :*/
	int lenght = 0, i = 0, count = 0;
	va_list argument;
	sp_print_struct sp_char[] = {
		{'s', _print_string},
		{'c', _print_char},
		{'%', _print_modulo},
		{'k', _print_K},
		{'!', _print_ex}
	};

	/* Code section : */
	va_start(argument, format);
	if (!format || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case '%':
				i++;
				for (; count < 7; count++)
				{
					if (format[i] == sp_char[count].specifier)
						lenght += sp_char[count].sp_poinetr_fun(argument);
				}
				break;
			default:
				lenght += _putchar(format[i]);
				break;
		}
		i++;
	}
	va_end(argument);
	return (lenght);
}
