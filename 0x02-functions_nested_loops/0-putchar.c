#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - prints _putchar, followed by a new line.
 * Return: 0 if succesful, otherwise non-zero
*/
int main(void)
{
char word[] = "_putchar";
int length, i;

/* Calculate length of the array ( Number of elements) */
length  = strlen(word);

for (i = 0; i < length; i++)
{
_putchar(word[n]);
}
_putchar('\n');

return (0);
}
