#include "main.h"

/**
 * print_last_digit - extract last number of variable
 * @i: variable where we extract last number
 * Return: i if successful
 */

int print_last_digit(int i)
{
i %= 10
if (i < 0)
i= i * -1
_putchar((i % 10) + '0')
return (i % 10)
