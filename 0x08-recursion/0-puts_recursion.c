#include <stdio.h>
/**
* _puts_recursion - prints a string.
* @str: string to be printed.
* Return: Nothing.
*/
void _puts_recursion(char *str)
{
if (*str == '\0')
{
putchar('\n');
return;
}
putchar(*str);
_puts_recursion(++str);
}
