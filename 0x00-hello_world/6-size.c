#include<stdio.h>
/**
   * main - prints the size of various types
   * Return: 0 if exited properly, non-zero otherwise
   */
int main(void)
{
char charType;
int intType;
long int longIntType;
long long int longLongIntType;
float floatType;

/* sizeof evaluates the size of a variable */
printf("Size of char: %d byte(s)\n", sizeof(charType));
printf("Size of int: %d byte(s)\n", sizeof(intType));
printf("Size of long int: %d byte(s)\n", sizeof(longIntType));
printf("Size of long long int: %d byte(s)\n", sizeof(longLongIntType));
printf("Size of float: %d byte(s)\n", sizeof(floatType));
    
return (0);
}
