#include <ctype.h>

/**
 * _islower - checks for lowercase character
 * @c: integer to be checked
 * Return: 1 if lowercase, 0 otherwise
*/
int _islower(int c)
{
if (islower(c))
return (1);
return (0);
}
