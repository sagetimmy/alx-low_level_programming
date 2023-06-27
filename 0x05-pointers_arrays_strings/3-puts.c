#include "main.h"
/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: The string to be printed.
 *
 * Return: None.
 */
void _puts(char *str)
{
        int i = 0;

        while (str[i] != '\0')
        {
                putchar(str[i]);
                i++;
        }
        putchar('\n');
}

