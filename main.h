#ifndef _PRINT_FUN_H
#define _PRINT_FUN_H

/* Standard lilibreries */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/* Functions prototupes */

int _putchar(char c);
int _print_char(va_list argument);
int _print_modulo(va_list argument);
int _print_string(va_list argument);
int _printf(const char *format, ...);
int _print_ex(va_list argument);
int _print_K(va_list argument);

/* Declaring an struct :*/

/**
 * specifier_struct - specifier character struct.
 * @specifier: specifier character print.
 * @sp_poinetr_fun: pointer to function.
 */
typedef struct specifier_struct
{
char specifier;
int  (*sp_poinetr_fun)(va_list);
} sp_print_struct;
#endif
