#include "main.h"

/**
 * _print_modulo - function print % character .
 * @argument: the % character to print.
 * Return: in success 1 & in erreur -1 .
 */

int _print_modulo(va_list argument)
{
	(void)argument;
	_putchar('%');

	return (1);
}

/**
 * _print_K - function that print K.
 * @argument: in put variable argument list.
 * Return: return 2 in success & 0 in failure.
 */
int _print_K(va_list argument)
{
	(void)argument;

	return (write(1, "%K", 2));
}

/**
 * _print_ex - function that prints !.
 * @argument: in put variable argument list.
 * Return: return 2 in success & 0 in failure.
 */
int _print_ex(va_list argument)
{
	(void)argument;

	return (write(1, "%!", 2));
}
