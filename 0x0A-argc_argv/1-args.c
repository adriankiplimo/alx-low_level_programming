#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument that counts argument input
 * @argv: argument that stores the strings in an array of char* (strings)
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc)
{
printf("%d\n", argc - 1);
(void)argv;
}
return (0);
}
