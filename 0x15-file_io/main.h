#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 *  _strlen - length of a string
 *  @s: input char
 *  Return: length of a string
 *       
 */
int _strlen(char *s)
{
int i = 0;

while (s[i])
{
i++;
}

return (i);
}

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /*MAIN_H*/
