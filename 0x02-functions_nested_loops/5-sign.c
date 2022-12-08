#include "main.h"
#include <stdio.h>

/**
 * print_sign- prints the sign of a number
 * @n: interger to be tested
 * Return: 1 greater than 0, 0 is zero, -1 less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}

}
