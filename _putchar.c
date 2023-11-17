#include "main.h"

/**
 * _putchar - function print character.
 * @c: input variable argument.
 * Return: in success return 1, n failure return -1.
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
