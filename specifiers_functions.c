#include "main.h"
/**
 * _strlen - Entry point
 * Description: program that print the string length
 * @s: pointer
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;
		while (*s != '\0')
		{
			len++;
			s++;
		}
		return (len);
}
/**
 * char_func - function to handle specifier 'c'
 * @sp: variadic function argument
 * Return: charcter to be printed
 */
int char_func(va_list sp)
{
	char c = va_arg(sp, int);
		return (write(1, &c, 1));/*return the chars*/
}
/**
 * string_func - function to handle specifier 's'
 * @sp: variadic function argument
 * Return: string to be printed
 */
int string_func(va_list sp)
{
	char *s = va_arg(sp, char *);
		return (write(1, s, strlen(s)));/*return string*/
}
/**
 * percent_func - function to handle specifier '%'
 * @sp:variadic function argument
 * Return: character to be printed
 */
int percent_func(va_list sp)
{
	return (write(1, "%%", 1));
}
