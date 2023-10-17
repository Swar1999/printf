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
	int length = 0; /*length of string*/
	char *s = va_arg(sp, char *);
		if (s == NULL)
			s = "(null)";/*print null*/
		while (s[length] != '\0')/*check all characters*/
			length += simi_putc(s[length]);
		return (length);
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
