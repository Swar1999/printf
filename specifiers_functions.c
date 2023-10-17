#include "main.h"
/**
 * char_func - function to handle specifier 'c'
 * @sp: variadic function argument
 * Return: int
 */
int char_func(va_list sp)
{
	char c = va_arg(sp, int);
		return (simi_putc(c));/*call simi_putc function*/
}
/**
 * string_func - function to handle specifier 's'
 * @sp: variadic function argument
 * Return: string to be printed
 */
int string_func(va_list sp)
{
	char *s = va_arg(sp, char *);
		return (simi_puts(s));/*call simi_puts function*/
}
/**
 * percent_func - function to handle specifier '%'
 * @sp:variadic function argument
 * Return: character to be printed
 */
int percent_func(va_list sp)
{
	(void) sp;
	return (simi_putc('%'));
}
