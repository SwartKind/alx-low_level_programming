#include "main.h"

/**
 * print_last_digit - extract last number of variable
 * @i: variable where we extract last number
 * Return: i if successful
 */

int print_last_digit(int i)
{
i %=10
if (i < 0)
i *= -1
i += 48
_putchar(i)
return (i - '0')
